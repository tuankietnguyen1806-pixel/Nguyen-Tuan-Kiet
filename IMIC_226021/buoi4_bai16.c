#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai16()
{
	int n = 0;
	int a[100] = { 0 };
	int x = 0;
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
	printf("nhap gia tri x: ");
	scanf("%d", &x);

	for (int i = 0; i < n; i++)
	{
		if (i == k-1)
		{
			a[i] = x;
		}

		printf("%d ", a[i]);
	}
}