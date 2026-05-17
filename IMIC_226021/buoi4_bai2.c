#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai2()
{
	int a[100] = {0};
	int sum = 0;
	float avg = 0;
	int n = 0;

	printf("nhap so phan tu n: ");
	scanf("%d", &n);

	for (int i = 0;i < n; i++)
	{
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		sum += a[i];
	}

	avg = sum / n*1.0;

	printf("tong phan tu trong mang: %d\n", sum);
	printf("trung binh cong phan tu trong mang: %.2f", avg);
}