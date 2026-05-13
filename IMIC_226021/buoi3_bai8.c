#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai8()
{
	int n = 0;
	int a = 0;
	int max = 0;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	while (n != 0)
	{
		a = n % 10;

		if (a > max)
		{
			max = a;
		}
		n = n / 10;
	}

	printf("so lon nhat trong n la: %d", max);
}