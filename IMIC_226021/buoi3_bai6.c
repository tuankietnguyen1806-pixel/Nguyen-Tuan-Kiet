#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai6()
{
	int n = 0;
	int dem = 0;

	printf("nhap so nguyen: ");
	scanf("%d", &n);

	

	while (n != 0)
	{
		n = n / 10;
		dem++;
	}
	
	printf("n co %d chu so", dem);	
}