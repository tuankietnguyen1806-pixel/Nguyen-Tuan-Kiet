#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi1_bai10()
{
	int a = 0;
	int b = 0;

	printf("nhap so nguyen a: ");
	scanf("%d", &a);
	printf("nhap so nguyen b: ");
	scanf("%d", &b);

	printf(" a & b = %d \n", a & b);
	printf(" a & b = %x \n", a & b);
	printf(" a | b = %d \n", a | b);
	printf(" a | b = %x \n", a | b);
	printf(" a ^ b = %d \n", a ^ b);
	printf(" a ^ b = %x \n", a ^ b);
	printf(" ~a  = %d \n", ~a);
	printf(" ~a  = %x \n", ~a);
}