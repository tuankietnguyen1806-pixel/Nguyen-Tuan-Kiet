#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai18()
{
	int n = 0;
	int mu = 0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	if ((n & (n - 1)) == 0 && n >0)
	{
		printf("%d la luy thua cua 2: ", n);

		while (n > 1)
		{
			n = n / 2;
			mu++;
		}
		printf("2^%d", mu);

	}
	else
	{
		printf("ko phai luy thua cua 2");
	}
}