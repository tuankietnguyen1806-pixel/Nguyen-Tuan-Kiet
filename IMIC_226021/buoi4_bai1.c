#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai1()
{
	int n;
	int a[10];

	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);

	for (int i = 0; i < n;i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		printf(" a[%d]= %d", i, a[i]);
	}
}