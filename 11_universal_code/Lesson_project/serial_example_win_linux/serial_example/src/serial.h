#ifndef SERIAL_H
#define SERIAL_H

int serial_open(const char *port_name, int baudrate);
int serial_write(int fd, const char *data, int len);
int serial_read(int fd, char *buf, int maxlen);
void serial_close(int fd);

#endif

