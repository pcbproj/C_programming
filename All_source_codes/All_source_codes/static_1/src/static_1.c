#include <stdio.h>

/* this is a function prototype */
void myFun(void);

int main(void)
{
	myFun();
	myFun();
	myFun();
	myFun();

	return 0;
}

void myFun(void)
{
	static int count = 0;

	count++;
	printf("This function executed %d time(s)\n", count);
}
