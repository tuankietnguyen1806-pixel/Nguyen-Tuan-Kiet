#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai3()
{
	int n = 0;
	int a[100] = { 0 };
	int max = 0;
	int min = 0;
	
	printf("nhap so phan tu trong mang: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	max = a[0];
	min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}

		if (min > a[i])
		{
			min = a[i];
		}
	}

	printf("MAX: %d\n", max);
	printf("MIN: %d", min);
}