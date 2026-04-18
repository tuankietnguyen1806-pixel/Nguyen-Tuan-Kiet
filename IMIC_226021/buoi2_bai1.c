#include <stdio.h>
void buoi2_bai1()
{
	int a;
	float b;
	
	printf("Nhap ma so sinh vien ");
	scanf_s("%d", &a);

	printf("GPA: ");
	scanf_s("%f", &b);

	printf("MSSV: [%d], GPA: [%f]", a, b);
}

