#include <stdio.h>

union address
{
	unsigned short shortAddr;
	unsigned int longAddr;
};

int main(void)
{
	union address addr;

	addr.shortAddr = 0xABCD;
	addr.longAddr = 0xEEEECCCC;

	printf("short addr = %#X\n",addr.shortAddr);
	printf("long addr = %#X\n",addr.longAddr);

	return 0;
}
