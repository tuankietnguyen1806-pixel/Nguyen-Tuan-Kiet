#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai13()
{
	int n = 0;
	int a[100] = { 0 };
	int dem = 0;
	int dadem = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		dem = 0; 
		dadem = 0;

		for (int x = 0; x < i; x++)
		{
			if (a[i] == a[x])
			{
				dadem = 1;
				break;
			}
		}

		if (dadem == 1)
		{
			continue; 
		}

		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j])
			{
				dem++;
			}
		}

		printf("phan tu %d, so lan xuat hien: %d\n", a[i], dem);
	}
}