#include <stdio.h>

int main(void)
{
	int number_1, number_2, number_3;
	int sum;

	printf("Enter 3 number: ");
	fflush(stdout);
	scanf("%d %d %d", &number_1, &number_2, &number_3);

	sum = number_1 + number_2 + number_3;
	printf("\nThe sum is %d\n", sum);

	printf("Press Enter key to exit the application\n");
	fflush(stdout);
	while(getchar() != '\n');
	getchar();

	return 0;
}
