#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai6()
{
	float a = 0;
	float b = 0;
	char c;

	printf("nhap a: ");
	scanf("%f", &a);
	printf("nhap b: ");
	scanf("%f", &b);
	printf("nhap toan tu: ");
	scanf(" %c", &c);

	switch (c)
	{
	case '+' :
		printf("a + b = %f", a + b);
		break;
	case '-':
		printf("a - b = %f", a - b);
		break;
	case '*':
		printf("a * b = %f", a * b);
		break;
	case '/':
		if (b != 0)
		{
			printf("a / b = %f\n", a / b);
		}
		else
		{
			printf("Khong the chia cho 0\n");
		}
		break;
	default: 
		printf("Invalid Input");
		break;
	}
}
