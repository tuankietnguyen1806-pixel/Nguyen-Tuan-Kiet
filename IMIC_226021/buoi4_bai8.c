#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai8()
{
	int n = 0;
	int a[100] = { 0 };

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}

}