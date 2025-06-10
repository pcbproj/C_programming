#include <stdio.h>

void wait_for_user_input(void);

int main(void)
{
	unsigned long income;
	unsigned long tax;

	double temp_income;

	printf("Enter your total income: ");
	fflush(stdout);
	scanf("%lf", &temp_income);

	if(temp_income < 0)
	{
		printf("Income cannot be -ve\n");
		wait_for_user_input();
		return 0;
	}

	income = (unsigned long)temp_income;

	if(income <= 9525)
	{
		tax = 0;
	}
	else if((income > 9525) && (income <= 38700)) // 9526 - 3870
	{
		tax = income * 0.12;
	}
	else if((income > 38700) && (income <= 82500)) // 38701 - 82500
	{
		tax = income * 0.22;
	}
	else if(income > 82500)
	{
		tax = income * 0.32;
		tax += 1000; // tax = tax + 1000
	}

	printf("Tax payable : %lu\n", tax);

    wait_for_user_input();
}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application");
	fflush(stdout);
	while(getchar() != '\n');
	getchar();
}
