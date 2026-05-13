#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai14()
{
	int n = 0;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	if (n <= 1)
	{
		printf(" %d khong phai so nguyen to", n);
		return;
	}

	for (int i = 2; i < n; i++)
	{
		if ( n % i == 0) 
		{
			printf(" %d khong phai so nguyen to", n);
			break;
		}
	}

	printf(" %d la so nguyen to", n);
}