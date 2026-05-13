#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai11()
{
	int a = 0;
	int b = 0;

	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);

	while (a  != 0 && b  != 0)
	{
		if (a > b)
		{
			a = a % b;
		
		}
		else
		{
			b = b % a;
	
		}		
	}

	if (a == 0)
	{
		printf("UCLN la: %d", b);
	}
	else
	{
		printf("UCLN la: %d", a);
	}

}