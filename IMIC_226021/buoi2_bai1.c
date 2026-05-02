#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void buoi2_bai1()
{
	int a = 0; 

	printf("nhap so nguyen a: ");
	scanf("%d", &a); 

	if ((a & 1) == 0)
	{
		printf("a la so chan");
	}
	else
	{
		printf("a la so le");
	}
}