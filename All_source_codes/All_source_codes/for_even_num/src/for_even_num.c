#include<stdio.h>

void wait_for_user_input(void);

int main(void)
{
	int start_num , end_num;
	unsigned int count_even = 0;

	printf("Enter starting and ending numbers (give a space between 2 numbers): ");
	fflush(stdout);
	scanf("%d %d", &start_num, &end_num);

	if(end_num < start_num)
	{
		//error
		printf("ending number should be > starting number\n");
		fflush(stdout);
		wait_for_user_input();
		return 0;
	}

	printf("Even numbers are :\n");

	for(; start_num <= end_num; start_num++)
	{
		if(!(start_num % 2))
		{
			printf("%4d\t",start_num);
			count_even++;
		}
	}

   printf("\nTotal even numbers : %u\n", count_even);

   wait_for_user_input();
}


void wait_for_user_input(void)
{
	printf("Press enter key to exit this application");
	fflush(stdout);
	while(getchar() != '\n');
	getchar();
}
