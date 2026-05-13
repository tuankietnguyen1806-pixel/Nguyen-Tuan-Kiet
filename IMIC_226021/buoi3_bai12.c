#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai12()
{
	int a = 0;
	int b = 0;

	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);

	int x = a;
	int y = b;

	while (a != 0 && b != 0)
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
		printf("UCLN la: %d\n", b);
		printf("BCNN la: %d", x * y / b);
	}
	else
	{
		printf("UCLN la: %d\n", a);
		printf("BCNN la: %d", x * y / a);
	}


}