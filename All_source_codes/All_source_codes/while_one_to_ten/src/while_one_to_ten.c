#include <stdio.h>

int main(void)
{
  unsigned char num = 1;

  while(num <= 10)
  {
	  printf("%hhu\n", num++);
  }
}
