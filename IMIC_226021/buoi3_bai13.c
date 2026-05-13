#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai13()
{
	int n = 0;
	int sum = 0;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	for (int i = 1; i < n ; i++)    
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}

	if (sum == n)
	{
		printf("so hoan hao");
	}
	else
	{
		printf("khong phai so hoan hao");
	}
}