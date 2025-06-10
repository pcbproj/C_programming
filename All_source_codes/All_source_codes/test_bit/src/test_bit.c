#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a number:");
	fflush(stdout);
	scanf("%d", &num);

	if (num & 1)
	{
	    printf("%d is odd number\n", num);
	}
	else
	{
		printf("%d is even number\n", num);
	}

	printf("Press Enter key to exit the application\n");
	fflush(stdout);
	while(getchar() != '\n');
	getchar();

	return 0;
}
