#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai15()
{
	char n;

	printf("nhap ki tu den: ");
	scanf(" %c", &n);

	switch (n)
	{
	case 'R':
		printf("STOP");
		break;
	case 'Y':
		printf("SLOW DOWN");
		break;
	case 'G':
		printf("GO");
		break;
	default:
		printf("Traffic light broken");
		break;
	}
}