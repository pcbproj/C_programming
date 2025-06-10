#include <stdio.h>

void array_display(const unsigned char *const pArray, unsigned int nItems);

int main(void)
{
	unsigned char someData[10] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};

	for(unsigned char  i = 0 ; i < 10 ; i++)
	{
		someData[i] = i;
	}

	unsigned int nItems = sizeof(someData) / sizeof(unsigned char);
	array_display(&someData[2], nItems - 2);

	return 0;
}

void array_display(const unsigned char *const pArray, unsigned int nItems)
{
    //lets display the contents of the received array
    for(unsigned int i = 0 ; i < nItems ; i++)
    {
    		printf("%x\t", pArray[i]);
    }

}
