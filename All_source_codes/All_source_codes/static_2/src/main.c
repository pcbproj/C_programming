#include <stdio.h>

static int mainPrivateData;

void file1_myFun(void);

int main(void)
{
	mainPrivateData = 100;
	printf("mainPrivateData = %d\n", mainPrivateData);
	file1_myFun();
	printf("mainPrivateData = %d\n", mainPrivateData);

	return 0;
}

void change_system_clock(int system_clock)
{
    printf("system clock changed to = %d\n", system_clock);
}
