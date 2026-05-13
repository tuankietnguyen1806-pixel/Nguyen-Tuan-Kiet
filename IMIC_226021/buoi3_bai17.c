#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai17()
{
	int w = 0;
	int h = 0;

	printf("nhap chieu rong: ");
	scanf("%d", &w);
	printf("nhap chieu dai: ");
	scanf("%d", &h);

	for (int x = 0; x < h ; x++)
	{
		for (int y = 0; y < w; y++)
		{
			printf("-");
		}

		printf("\n");
	}
}