#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai4()
{
	int n = 0;
	int a[100] = { 0 };
	int soduong = 0;
	int soam = 0;
	int sokhong = 0;

	printf("nhap so phan tu trong mang: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			soduong += 1;
		}
		if (a[i] < 0)
		{
			soam += 1;
		}
		if (a[i] == 0)
		{
			sokhong += 1;
		}
	}

	printf("SL so duong: %d\n", soduong);
	printf("SL so am: %d\n", soam);
	printf("SL so khong: %d", sokhong);
}