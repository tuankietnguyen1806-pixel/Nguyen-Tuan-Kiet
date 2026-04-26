#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi1_bai6()
{
	int n = 0;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	printf("n/2 = %d\n", n >> 1);
	printf("n/4 = %d\n", n >> 2);
}