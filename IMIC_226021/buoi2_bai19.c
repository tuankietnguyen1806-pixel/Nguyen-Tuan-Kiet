#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai19()
{
	int n = 0;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	if (((n >> 7) & 1) == 0)
	{
		printf("Device is Sleeping");
	}
	else if (((n >> 7) & 1) == 1 && ((n >> 6) & 1) == 0)
	{
		printf("Device is Ready");
	}
	else if (((n >> 7) & 1) == 1 && ((n >> 6) & 1) == 1)
	{
		printf("System Failure");
	}
}