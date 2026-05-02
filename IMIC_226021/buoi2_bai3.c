#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai3()
{
	int a = 0;

	printf("nhap nam: ");
	scanf("%d", &a);

	if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0)))
	{
		printf("%d la nam nhuan", a);
	}
	else
	{
		printf("%d la nam khong nhuan", a);
	}
}
