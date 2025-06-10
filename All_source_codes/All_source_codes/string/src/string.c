#include <stdio.h>

int main(void)
{
	char msg1[] = "Hello how are you?";
	const char *pmsg2 = "C programming language";

	msg1[0] = 'b';
	printf("Message is : %s\n", msg1);
	fflush(stdout);

	//pmsg2[0] = 'b';
	printf("Message is : %s\n", pmsg2);
	fflush(stdout);

	printf("Address of 'pmsg2' variable = %p\n", &pmsg2);
	printf("Value of 'pmsg2' variable = %p\n", pmsg2);
	fflush(stdout);

	return 0;
}
