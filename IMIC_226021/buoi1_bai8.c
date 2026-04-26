#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi1_bai8()
{
	int n = 0; 

	printf("nhap so nguyen n: ");
	scanf("%d", &n);

	n |= ( (1 << 0) | (1 << 3));

	printf(" n = %x", n);
}