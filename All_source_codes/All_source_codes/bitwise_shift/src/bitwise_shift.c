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
	char data = 0b00001000; // 0x08
	char mask = 1<<4; // 0x10

	printf("Initial data: ");
	print_binary(data);
	printf("\n");

	// Set 4th bit
	data |= mask;

	printf("Set 4th bit: ");
	print_binary(data);
	printf("\n");

	// Clear 4th bit
	data &= ~mask;

	printf("Clear 4th bit: ");
	print_binary(data);
	printf("\n");

	return 0;
}
