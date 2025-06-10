#include <stdio.h>

int main(void)
{
	unsigned char age = 0;

	printf("Enter your age here: ");
	fflush(stdout);
	scanf("%hhu",&age);

	if(age < 18)
	{
		printf("Sorry ! You are not eligible to vote\n");
		fflush(stdout);
	}

	if(age >= 18)
	{
		printf("Congrats ! You are eligible to vote\n");
		fflush(stdout);
	}

	printf("Press enter key to exit this application");
	fflush(stdout);
    while(getchar() != '\n');
    getchar();
}
