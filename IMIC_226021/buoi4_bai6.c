#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai6()
{
	int n = 0;
	int a[100] = { 0 };

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			a[i] = 0;
		}
		printf("%d ", a[i]);
	}

	
}