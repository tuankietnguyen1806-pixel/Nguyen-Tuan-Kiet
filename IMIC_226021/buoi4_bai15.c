#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai15()
{
	int n = 0;
	int a[100] = { 0 };
	int k = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	printf("nhap vi tri k: ");
	scanf("%d", &k);

	for (int i = k-1; i < n-1; i++)
	{
		a[i] = a[i + 1];
	}

	printf("mang sau khi xoa phan tu tai k:");

	for (int i = 0; i < n-1; i++) 
	{
		printf(" %d", a[i]);
	}

}