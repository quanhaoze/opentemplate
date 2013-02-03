/*
 * main.cpp
 */
#include <stdio.h>
#include <stdlib.h>
#include "bit.h"

int main(int argc, char *argv[])
{
	unsigned char p1[] = { 0x00,0x00,0x01};
	unsigned char p2[] = { 0x80,0x24,0x31};
	unsigned char p3[3]= {0x80,0x10,0x20};

	bit_rot_right(p3,24,1);

	for (int i = 0; i < 3; i++)
		printf("%#x\n",p3[i]);

	return 0;

}
