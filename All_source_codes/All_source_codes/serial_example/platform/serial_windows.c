#include "serial.h"
#include <windows.h>
#include <stdio.h>

static HANDLE hSerial = INVALID_HANDLE_VALUE;

int serial_open(const char *port_name, int baudrate) {
    hSerial = CreateFileA(port_name, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (hSerial == INVALID_HANDLE_VALUE) {
        printf("Error opening port %s\n", port_name);
        return -1;
    }

    DCB dcb = {0};
    dcb.DCBlength = sizeof(dcb);
    if (!GetCommState(hSerial, &dcb)) return -1;

    dcb.BaudRate = baudrate;
    dcb.ByteSize = 8;
    dcb.StopBits = ONESTOPBIT;
    dcb.Parity   = NOPARITY;

    if (!SetCommState(hSerial, &dcb)) return -1;

    COMMTIMEOUTS timeouts = {0};
    timeouts.ReadIntervalTimeout         = 50;
    timeouts.ReadTotalTimeoutConstant    = 50;
    timeouts.ReadTotalTimeoutMultiplier  = 10;

    SetCommTimeouts(hSerial, &timeouts);

    return 0;
}

int serial_write(int fd_unused, const char *data, int len) {
    DWORD written;
    WriteFile(hSerial, data, len, &written, NULL);
    return written;
}

int serial_read(int fd_unused, char *buf, int maxlen) {
    DWORD read;
    ReadFile(hSerial, buf, maxlen, &read, NULL);
    return read;
}

void serial_close(int fd_unused) {
    CloseHandle(hSerial);
}
