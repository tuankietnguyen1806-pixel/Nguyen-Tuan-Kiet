#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai5()
{
	float a = 0;

	printf("nhap diem: ");
	scanf("%f", &a);

	if (a >= 9.0)
	{
		printf("excellent");
	}
	else if (a >= 8.0)
	{
		printf("very good");
	}
	else if (a >= 6.5)
	{
		printf("good");
	}
	else if (a >= 5.0)
	{
		printf("average");
	}
	else if (a < 5.0)
	{
		printf("fail");
	}
}