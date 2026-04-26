#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi1_bai5()
{
	int n = 0;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	printf("n x 2= %d \n", n << 1);
	printf("n x 4= %d \n", n << 2);
	printf("n x 8= %d \n", n << 3);
}