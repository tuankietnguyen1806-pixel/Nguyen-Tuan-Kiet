#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai11()
{
	int n = 0;
	int a[100] = { 0 };
	int max = 0;


	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n-1;i++)
	{
		if (a[i] > a[i + 1])
		{
			printf("mang khong tang dan");
			return;
		}		
	}

	printf("mang tang dan");
}