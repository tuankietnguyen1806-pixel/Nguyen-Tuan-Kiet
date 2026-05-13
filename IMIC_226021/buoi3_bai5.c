#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai5()
{
	int a = 0;
	int b = 0;
	int k = 0;

	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	printf("nhap khoang cach k: ");
	scanf("%d", &k);
	
	if (a == b)
	{
		printf("a phai khac b");
		return;
	}

	if (k <= 0)
	{
		printf("vui long nhap k > 0");
		return;
	}

	if (a > b)
	{
		for (int i = a; i <= b; i += k)
		{
			printf("%d ", i);
		}
	}
	else
	{
		for (int i = a; i >= b; i -= k)
		{
			printf("%d ", i);
		}
	}
		
}