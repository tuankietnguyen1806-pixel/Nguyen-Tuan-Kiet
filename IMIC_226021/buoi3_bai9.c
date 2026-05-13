#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai9()
{
	int n = 0;
	int a = 0;
	int sum = 0;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	while (n != 0)
	{
		a = n % 10;
		sum = sum * 10 + a;
		n = n / 10;
	}

	printf("so nghich dao cua n: %d", sum);
}