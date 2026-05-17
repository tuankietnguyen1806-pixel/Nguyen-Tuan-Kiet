#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai10()
{
	int n = 0;
	int a[100] = { 0 };
	int max = 0;
	float thuong = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		thuong = a[i]*1.0 / max;  
		printf("a[%d]' = %.2f ",i, thuong);
	}
}