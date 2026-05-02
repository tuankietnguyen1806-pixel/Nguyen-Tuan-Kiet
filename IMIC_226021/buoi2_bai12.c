#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai12()
{
	float luongbasic = 0;
	int hour = 0;
	int hour_tangca = 0;
	float luong = 0;
	float luong_real = 0;

	printf("nhap luong co ban: ");
	scanf("%f", &luongbasic);
	printf("nhap so gio lam viec: ");
	scanf("%d", &hour);

	
	if (hour > 160)
	{
		hour_tangca = hour - 160;
		luong = luongbasic * (1.5 * hour_tangca + 160);
	}
	else
	{
		luong = luongbasic * hour;
	}

	if (luong > 15000000)
	{
		luong_real = luong - luong * 0.1;
	}
	else
	{
		luong_real = luong - luong * 0.05;
	}

	printf("luong thuc nhan la: %f", luong_real);
}