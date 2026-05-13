#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai10()
{
	int n = 0;
	int a = 0;
	int sum = 0;
	int exam = 0;

	printf("nhap n: ");
	scanf("%d", &n);
	exam = n;

	while (n != 0)
	{
		a = n % 10;
		sum = sum * 10 + a;
		n = n / 10;
	}
	
	if (sum == exam)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not Palindrome");
	}
}