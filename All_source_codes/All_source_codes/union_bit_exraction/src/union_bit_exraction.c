#include <stdio.h>

typedef union
{
	unsigned int packetValue;

	struct
	{
		unsigned int crc				:2;
		unsigned int status			:1;
		unsigned int payload			:12;
		unsigned int bat				:3;
		unsigned int sensor			:3;
		unsigned int longAddr		:8;
		unsigned int shortAddr		:2;
		unsigned int addrMode		:1;
	} packetFields;
} Packet_t;

int main(void)
{
   Packet_t packet;
   printf("Enter the 32bit packet value:");
   fflush(stdout);
   scanf("%X", &packet.packetValue);

   printf("crc      :%#x\n", packet.packetFields.crc);
   printf("status   :%#x\n",packet.packetFields.status);
   printf("payload  :%#x\n",packet.packetFields.payload);
   printf("bat      :%#x\n",packet.packetFields.bat);
   printf("sensor   :%#x\n",packet.packetFields.sensor);
   printf("longAddr :%#x\n",packet.packetFields.longAddr);
   printf("shortAddr:%#x\n",packet.packetFields.shortAddr);
   printf("addrMode :%#x\n",packet.packetFields.addrMode);

   printf("Size of union is %zu\n",sizeof(packet));

   return 0;
}
