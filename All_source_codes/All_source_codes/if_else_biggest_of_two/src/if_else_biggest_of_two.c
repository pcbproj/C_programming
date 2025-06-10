#include <stdio.h>

void wait_for_user_input(void);

int main(void)
{
	float num1, num2;

	printf("Enter the first number(integer):");
	fflush(stdout);
	if (scanf("%f", &num1) == 0)
	{
		printf("Invalid input! Exiting...\n");
		wait_for_user_input();
		return 0;
	}
	printf("Enter the second number(integer):");
	fflush(stdout);
	if (scanf("%f", &num2) == 0)
	{
		printf("Invalid input! Exiting...\n");
		wait_for_user_input();
		return 0;
	}

	int n1, n2;

	/* we are storing only integer part of the real number */
	n1 = num1;
	n2 = num2;

	if((n1 != num1) || (n2 != num2))
	{
		printf("Warning! Comparing only integer part\n");
	}

	if (n1 == n2)
	{
	    printf("Numbers are equal\n");
	    fflush(stdout);
	}
	else
	{
	    if (n1 < n2)
	    {
	        printf("%d is bigger\n", n2);
	        fflush(stdout);
	    }
	    else
	    {
	        printf("%d is bigger\n", n1);
	        fflush(stdout);
	    }
	}

	wait_for_user_input();
}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application");
	fflush(stdout);
	while(getchar() != '\n');
	getchar();
}
