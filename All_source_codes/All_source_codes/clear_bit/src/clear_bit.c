#include <stdio.h>

/* Outputs a number in binary form */
void print_binary(char num)
{
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--)
    {
        putchar((num & (1 << i)) ? '1' : '0');
    }
}

int main(void)
{
	/* Example of clearing 4, 5 and 6 bits in data */
	char data = 0b10111110; // 0xBE
	char mask = 0b10001111; // 0x8F

	printf("Initial data: ");
	print_binary(data);
	printf("\n");

	// Clear 4th, 5th, 6th bit
	data &= mask;

	printf("Clearing 4, 5 and 6 bits: ");
	print_binary(data);
	printf("\n");

	return 0;
}
