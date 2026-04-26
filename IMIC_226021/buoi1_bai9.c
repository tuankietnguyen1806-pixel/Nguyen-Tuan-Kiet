#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi1_bai9()
{
	int n = 0; 

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	n &= ~(1 << 0);

	printf("n= %X", n);
}