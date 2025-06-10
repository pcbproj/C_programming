#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char led_state = 0;

	while(1)
	{
		led_state ^= 1;
		printf("led_state = %u\n", led_state);
		fflush(stdout);
		sleep(1);
	}

	return 0;
}
