#include<stdio.h>

void wait_for_user_input(void);

int main(void)
{
	unsigned int height;
	printf("Enter height of pyramid: ");
	fflush(stdout);
	scanf("%u",&height);

	for(unsigned int i = 1; i <= height; i++)
	{
		for(unsigned int j = i; j > 0; j--)
		{
			printf("%u  ",j);
		}
		printf("\n");
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

