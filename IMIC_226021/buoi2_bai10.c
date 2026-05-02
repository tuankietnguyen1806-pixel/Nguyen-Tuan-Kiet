#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai10()
{
	int a = 0; 

	printf("nhap bien a: ");
	scanf("%d", &a);

	if (((a >> 1) & 1 == 1)) // test bit 1
	{
		printf("Write Access Granted");
	}
	else
	{
		printf("Access Denied");
	}
}