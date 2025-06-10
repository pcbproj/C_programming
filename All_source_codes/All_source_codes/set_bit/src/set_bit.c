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
	/* Example of setting 4 and 7 bits in data */
	char data = 0b00111110; // 0x3E
	char mask = 0b10010000; // 0x90

	printf("Initial data: ");
	print_binary(data);
	printf("\n");

	// Set 4th and 7th bits
	data |= mask;

	printf("Set 4 and 7 bits: ");
	print_binary(data);
	printf("\n");

	return 0;
}
