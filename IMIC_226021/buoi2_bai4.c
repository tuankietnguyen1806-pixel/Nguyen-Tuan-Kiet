#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai4()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("do dai canh a: ");
	scanf("%d", &a);
	printf("do dai canh b: ");
	scanf("%d", &b);
	printf("do dai canh c: ");
	scanf("%d", &c);

	if ((a > 0) && (b > 0) && (c > 0) && (a + b) > c && (a + c) > b && (b + c) > a)
	{
		printf("tam giac hop le");
	}
	else
	{
		printf("tam giac khong hop le");
	}
}