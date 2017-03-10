
#include <stdio.h>
#include <stdlib.h>

typedef union DeviceA_Reg_TAG
{
	struct
	{
		unsigned char bit1  : 1;
		unsigned char bit2  : 1;
		unsigned char bit3  : 1;
		unsigned char bit4  : 1;
		unsigned char bit5  : 1;
		unsigned char bit6  : 1;
		unsigned char bit7  : 1;
		unsigned char bit8  : 1;
	}accress;
	unsigned char status: 8;
}DeviceA_Reg;

int main(void) {

	DeviceA_Reg printerStatus;
	printerStatus.status = 0xF4;

	printf("status : %d\n",printerStatus.status);
	printf("bit 1 : %d\n",printerStatus.accress.bit1);
	printf("bit 2 : %d\n",printerStatus.accress.bit2);
	printf("bit 3 : %d\n",printerStatus.accress.bit3);
	printf("bit 4 : %d\n",printerStatus.accress.bit4);
	printf("bit 5 : %d\n",printerStatus.accress.bit5);
	printf("bit 6 : %d\n",printerStatus.accress.bit6);
	printf("bit 7 : %d\n",printerStatus.accress.bit7);
	printf("bit 8 : %d\n",printerStatus.accress.bit8);

	/*
	printf("bit 1 : %d\n",printerStatus.bit1);
	printf("bit 2 : %d\n",printerStatus.bit2);
	printf("bit 3 : %d\n",printerStatus.bit3);
	printf("bit 4 : %d\n",printerStatus.bit4);
	printf("bit 5 : %d\n",printerStatus.bit5);
	printf("bit 6 : %d\n",printerStatus.bit6);
	printf("bit 7 : %d\n",printerStatus.bit7);
	printf("bit 8 : %d\n",printerStatus.bit8);
	*/

	return EXIT_SUCCESS;
}
