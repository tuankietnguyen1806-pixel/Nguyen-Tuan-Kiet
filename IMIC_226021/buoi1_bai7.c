#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi1_bai7()
{
	int a = 0; 
	int b = 0; 

	printf("nhap so nguyen a: ");
	scanf("%d", &a);
	printf("nhap so nguyen b: ");
	scanf("%d", &b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf(" a = %d  b = %d ", a, b);
}