#include <stdio.h>
#include <string.h>
#include "serial.h"

int main() {
#ifdef _WIN32
    const char *port = "COM7";  // Specify the desired COM port
#else
    const char *port = "/dev/ttyACM0";  // Specify the desired port
#endif

    int fd = serial_open(port, 115200);
    if (fd < 0) {
        printf("Failed to open serial port\n");
        return 1;
    }

	const char *msg = "Start MCU!\n";
    serial_write(fd, msg, strlen(msg));

    char buf[50] = {0};
    int n;

    printf("Waiting for data...\n");
    fflush(stdout);

    while (1)
    {
        n = serial_read(fd, buf, sizeof(buf) - 1);
        if (n > 0)
        {
            buf[n] = '\0';
            printf("%s", buf);
            fflush(stdout);
        }
    }

    serial_close(fd);
    return 0;
}
