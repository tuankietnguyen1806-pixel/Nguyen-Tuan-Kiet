#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai19()
{
	int a = 0;

	printf("canh a: ");
	scanf("%d", &a);



	for (int x = 0; x < a; x++)
	{
		for (int y = a; y > x; y--)
		{
			printf("-");
		}

		printf("\n");
	}
}