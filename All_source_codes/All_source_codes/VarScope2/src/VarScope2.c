#include <stdio.h>

int valueA = 4;

int main(void)
{
	{
		int valueA = 67;
	}

	printf("valueA = %d\n", valueA);

	return 0;
}
