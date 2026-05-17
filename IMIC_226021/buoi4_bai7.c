#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai7()
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
		if (i % 2 == 0)
		{
			a[i] += 2;
		}

		printf("%d", a[i]);
	}
}