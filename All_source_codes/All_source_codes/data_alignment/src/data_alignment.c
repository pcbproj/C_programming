#include <stdio.h>

typedef struct
{
	char  data1;
	int   data2;
	char  data3;
	short data4;
} DataSet_t;

int main(void)
{
	DataSet_t data = {0};

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	unsigned char *ptr;

	ptr = (unsigned char*)&data;

	unsigned int totalSize = sizeof(DataSet_t);

	printf("Memory address       Content \n");
	printf("==============================\n");

	for(unsigned int i = 0 ; i < totalSize ; i++)
	{
		printf("%p ,   %X\n",ptr,*ptr);
		ptr++;
	}

	printf("Total memory consumed by this struct variable = %zu\n",sizeof(DataSet_t));

	return 0;
}
