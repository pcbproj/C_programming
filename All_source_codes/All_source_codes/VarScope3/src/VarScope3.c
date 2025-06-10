#include <stdio.h>

int my_global_var;

int main()
{
    int my_local_var;

	printf("01 Value of the global variable 'my_global_var' is %d\n", my_global_var);
	printf("02 Value of the local variable 'my_local_var' is %d\n", my_local_var);

    return 0;
}
