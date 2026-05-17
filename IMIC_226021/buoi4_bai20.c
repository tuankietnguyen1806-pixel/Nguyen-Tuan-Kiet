#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai20()
{
	int a[100][100] = { 0 };
	int dong = 0;
	int cot = 0;

	printf("nhap dong: ");
	scanf("%d", &dong);
	printf("nhap cot: ");
	scanf("%d", &cot);
	
	for(int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot;j++)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("ma tran: \n");

	for(int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot;j++)
		{
			printf("%d", a[i][j]);
		}

		printf("\n");
	}
	
	printf("ma tran chuyen vi\n");

	for(int j = 0; j < cot; j++)
	{
		for (int i = 0; i < dong; i++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}