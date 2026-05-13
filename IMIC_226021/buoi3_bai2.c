#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai2()
{
	int i = 0;
	int n = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for ( i = 1; i <= 10 ; i++)
	{
		printf(" %d x %d = %d\n", n, i, n * i);
	}
}