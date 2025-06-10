#include <stdio.h>

int function_add_numbers(int a, int b, int c);

int main(void)
{
	int retvalue;

	retvalue = function_add_numbers(12, 13, 15);

	printf("Sum = %d\n", retvalue);

	return 0;
}

int function_add_numbers(int a, int b, int c)
{
	int sum = a + b + c;

	return sum;
}
