#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai4()
{
	int i = 0;
	int n = 0;
	float S = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		S = S + 1.0 / i; 
	}

	printf("tong la: %f", S);
}