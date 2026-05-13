#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai3()
{
	int i = 0;
	int n = 0;
	int S = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		S = S + i*i;
	}

	printf("tong la: %d", S);
}