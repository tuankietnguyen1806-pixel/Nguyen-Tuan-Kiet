#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai1()
{
	int n = 0;
	int i = 0;
	int S = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			S = S + i;
		}
	}

	printf(" tong cac so chan [1,n] = %d", S);
}