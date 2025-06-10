#include <stdio.h>

int main(void)
{
//	printf("Size of char data type = %zu\n",sizeof(char));
//	printf("Size of short data type = %zu\n",sizeof(short));
//	printf("Size of int data type = %zu\n",sizeof(int));
//	printf("Size of long  data type = %zu\n",sizeof(long));
//	printf("Size of long long data type = %zu\n",sizeof(long long));
//	printf("Size of double data type = %zu\n",sizeof(double));

	long long var = 900;
	printf("Size of long long variable = %zu\n", sizeof(var));

	size_t size = sizeof(var);
	printf("Size of long long variable = %zu\n", size);

    return 0;
}
