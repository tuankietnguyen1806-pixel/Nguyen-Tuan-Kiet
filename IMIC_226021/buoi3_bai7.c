#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai7()
{
	int n=0;
	int sum = 0;
	int a = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	while (n != 0)
	{
		a = n % 10;
		
		if (a % 2 != 0)
		{
			sum += a;
		}

		n = n / 10;
	}

	printf("tong cac so le trong n la %d", sum);
}