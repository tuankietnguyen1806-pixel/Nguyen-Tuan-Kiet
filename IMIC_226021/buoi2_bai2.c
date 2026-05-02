#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void buoi2_bai2()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;

	printf("nhap so nguyen a: ");
	scanf("%d", &a);
	printf("nhap so nguyen b: ");
	scanf("%d", &b);
	printf("nhap so nguyen c: ");
	scanf("%d", &c);

	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if (max < c)
	{
		max = c; 
	}

	printf("so lon nhat la: %d", max);
}