#include <stdio.h>

void wait_for_user_input(void);

int main()
{
    int val;

    while (1)
    {
    		printf("Enter numbers (to exit enter -99):\n");
    	    fflush(stdout);
        scanf("%d", &val); // Reading the number

        if (val == -99) break; // Exiting the loop
        else if (val == -1) continue; // Skipping an iteration
        else
        {
        		printf("Processed: %d\n", val);
        }
    }

    printf("The loop is complete.\n");
    wait_for_user_input();

    return 0;
}

void wait_for_user_input(void)
{
	printf("Press enter key to exit this application");
	fflush(stdout);
	while(getchar() != '\n');
	getchar();
}
