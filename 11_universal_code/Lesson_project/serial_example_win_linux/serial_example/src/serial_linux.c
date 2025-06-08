#include "serial.h"
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int serial_open(const char *port_name, int baudrate) {
    int fd = open(port_name, O_RDWR | O_NOCTTY);
    if (fd < 0) {
        perror("open");
        return -1;
    }

    struct termios tty;
    if (tcgetattr(fd, &tty) != 0) {
        perror("tcgetattr");
        close(fd);
        return -1;
    }

    cfsetspeed(&tty, baudrate);
    tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;
    tty.c_iflag = tty.c_oflag = tty.c_lflag = 0;
    tty.c_cc[VMIN] = 0;
    tty.c_cc[VTIME] = 10;

    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        perror("tcsetattr");
        close(fd);
        return -1;
    }

    return fd;
}

int serial_write(int fd, const char *data, int len) {
    return write(fd, data, len);
}

int serial_read(int fd, char *buf, int maxlen) {
    return read(fd, buf, maxlen);
}

void serial_close(int fd) {
    close(fd);
}
