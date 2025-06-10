#include <stdio.h>

int main(void)
{
	short data = 0xB410;
	short mask = 0x003F;
	short output;

	printf("Initial data: %#hX\n", data);

	// Extract bits [14:9] from data and write to output
	output = (data >> 9) & mask;

	printf("Output: %#hX\n", output);

	return 0;
}
