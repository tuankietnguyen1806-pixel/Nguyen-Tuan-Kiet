#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void buoi2_bai11()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float x1 = 0;
	float x2 = 0;
	float delta = 0;
	
	printf("nhap a: ");
	scanf("%f", &a);
	printf("nhap b: ");
	scanf("%f", &b);
	printf("nhap c: ");
	scanf("%f", &c);
	
	if (a == 0)
	{
		printf("phuong trinh bac 1: ");
		printf("bx + c = 0 => x = -c/b => x= %f", -c / b);
	}
	else if (a != 0 )
	{
		delta = b * b - 4 * a * c;

		if (delta > 0)
		{
			printf("phuong trinh co 2 nghiem phan biet: \n");
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			printf("x1 = %f \n x2 = %f", x1,x2);
		}
		else if (delta == 0)
		{
			printf("phuong trinh co 2 nghiem kep: \n");
			x1 = x2 = -b / 2 * a;
			printf("x1 = x2 = %f", x1);
		}
		else
		{
			printf("phuong trinh vo nghiem");
		}
	}
}