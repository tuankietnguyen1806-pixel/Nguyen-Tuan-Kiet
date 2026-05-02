#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai20()
{
	char c ;

	printf("nhap ki tu: ");
	scanf(" %c", &c);

	if (c >= 65 && c <= 90)
	{
		printf("CHU VIET HOA");
	}
	else if (c >= 97 && c <= 122)
	{
		printf("chu viet thuong");
	}
	else if (c >= 48 && c <= 57)
	{
		printf("chu so");
	}
}