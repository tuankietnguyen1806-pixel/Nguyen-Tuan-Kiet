#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai14()
{
	int n = 0;
	int a[100] = { 0 };
	int sum = 0;
	int cmd = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	printf("cac so nguyen to trong mang: ");

	for (int i = 0; i < n; i++)
	{
		cmd = 0;

		if (a[i] <= 1)
		{
			cmd = 1;
		}
		else
		{
			for (int x = 2; x < a[i]; x++)
			{
				if (a[i] % x == 0)
				{
					cmd = 1;
					break;
				}
			}
		}
		
				
		if (cmd == 0) 
		{
			printf("%d ", a[i]);
			sum += a[i];
		}		
	}

	printf("tong: %d", sum);

}