#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai16()
{
	int n = 0;
	float pi = 0;
	float sum = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + 1 / (2.0 * i + 1);
		}
		else
		{
			sum = sum - 1 / (2.0 * i + 1);
		}
	}

	pi = 4 * sum;

	printf("pi bang: %f", pi);
}