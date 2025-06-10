#include <stdio.h>

unsigned long long g_data = 0x7FFEABCD11112345;

int main(void)
{
	unsigned int *pAddress = (unsigned int*)&g_data;
	printf("Value at address %p is : %x\n", pAddress, *pAddress);

	pAddress++;
	printf("Value at address %p is : %x\n", pAddress, *pAddress);

	return 0;
}
