#include <stdio.h>

typedef struct
{
	char  data1;
	int   data2;
	char  data3;
	short data4;
} DataSet_t;

void displayMemberElements(DataSet_t data);

int main(void)
{
	DataSet_t data = {0};

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	displayMemberElements(data);

	return 0;
}

void displayMemberElements(DataSet_t data)
{
	printf("data1 = %X\n",data.data1);
	printf("data2 = %X\n",data.data2);
	printf("data3 = %X\n",data.data3);
	printf("data4 = %hX\n",data.data4);
}

