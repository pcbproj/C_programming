#include <stdio.h>

int main(void)
{
	char var_1 = 'A';
	float var_2 = 5.4;
	long long var_3 = 9223478036;

	printf("Address of variable var_1 = 0x%p\n", &var_1);
	printf("Address of variable var_2 = 0x%p\n", &var_2);
	printf("Address of variable var_3 = 0x%p\n", &var_3);

	return 0;
}
