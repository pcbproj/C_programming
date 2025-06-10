#include <stdio.h>
#include <string.h>

#define SIZE	  10

int main(void)
{
	char name[SIZE];

	printf("Enter your name: ");
	fflush(stdout);
	fgets(name, sizeof(name), stdin);
	while(getchar() != '\n');
	printf("Hello, %s\n", name);
	fflush(stdout);
	fgets(name, sizeof(name), stdin);
	printf("Hello, %s\n", name);

	for (int i = 0; i < SIZE; i++)
	{
	    printf("%x\n", name[i]);
	}

	return 0;
}
