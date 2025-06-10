#include <stdio.h>

/* This is a function prototype myFunc */
void myFun(void);

int myVar;

int main(void)
{
	myVar = 900;
	printf("Value of the variable myVar = %d\n", myVar);

	/* This is function call */
	myFun();

	return 0;
}

/* This is function definition */
void myFun(void)
{
	myVar = 800;
	printf("02Value of the variable myVar = %d\n", myVar);
}
