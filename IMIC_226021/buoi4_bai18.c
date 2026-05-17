#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai18()
{
	int a[100][100] = { 0 };
	int dong = 0;
	int cot = 0;
	int sumcot = 0;
	int sumdong = 0;


	printf("nhap dong: ");
	scanf("%d", &dong);
	printf("nhap cot: ");
	scanf("%d", &cot);

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot;j++)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("ma tran vua nhap la: \n");

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot;j++)
		{
			printf("%d ", a[i][j]);

		}

		printf("\n");
	}

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot;j++)
		{
			sumdong += a[i][j];
		}

		printf("tong dong %d: %d \n", i , sumdong);
	}

	for (int j = 0; j < cot; j++)
	{
		for (int i = 0; i < dong;i++)
		{
			sumcot += a[i][j];
		}

		printf("tong cot %d: %d \n", j, sumcot);
	}


}