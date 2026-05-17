#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai9()
{
	int n = 0;
	int a[100] = { 0 };
	int b[100] = { 0 };
	int c[100] = { 0 };
	int x = 0;
	int y = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0;i < n;i++)
	{
		if (a[i] % 2 == 0)
		{
			b[x] = a[i];
			x++;
		}
		else
		{
			c[y] = a[i];
			y++;
		}
	}

	for (int i = 0;i < x; i++)
	{
		printf("b[%d]= %d ",i, b[i]);
	}

	printf("\n");

	for (int i = 0;i < y; i++)
	{
		printf("c[%d]= %d ",i, c[i]);
	}
}