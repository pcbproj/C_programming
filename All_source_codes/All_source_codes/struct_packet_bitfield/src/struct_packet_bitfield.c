#include <stdio.h>

typedef struct
{
	unsigned int crc				:2;
	unsigned int status			:1;
	unsigned int payload			:12;
	unsigned int bat				:3;
	unsigned int sensor			:3;
	unsigned int longAddr		:8;
	unsigned int shortAddr		:2;
	unsigned int addrMode		:1;
} Packet_t;

int main(void)
{
   unsigned int packetValue;
   printf("Enter the 32bit packet value:");
   fflush(stdout);
   scanf("%X", &packetValue);

   Packet_t packet;

   packet.crc 		=   (unsigned char) (packetValue & 0x3);
   packet.status 	=   (unsigned char) ( (packetValue >> 2) & 0x1 );
   packet.payload   =   (unsigned short) ( (packetValue >> 3) & 0xFFF );
   packet.bat       =   (unsigned char) ( (packetValue >> 15) & 0x7 );
   packet.sensor    =   (unsigned char) ( (packetValue >> 18) & 0x7 );
   packet.longAddr  =   (unsigned char) ( (packetValue >> 21) & 0xFF );
   packet.shortAddr =   (unsigned char) ( (packetValue >> 29) & 0x3 );
   packet.addrMode  =   (unsigned char) ( (packetValue >> 31) & 0x1 );

   printf("crc      :%#x\n",packet.crc);
   printf("status   :%#x\n",packet.status);
   printf("payload  :%#x\n",packet.payload);
   printf("bat      :%#x\n",packet.bat);
   printf("sensor   :%#x\n",packet.sensor);
   printf("longAddr :%#x\n",packet.longAddr);
   printf("shortAddr:%#x\n",packet.shortAddr);
   printf("addrMode :%#x\n",packet.addrMode);

   printf("Size of struct is %zu\n",sizeof(packet));

   return 0;
}

