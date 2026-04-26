#include <stdio.h>
void buoi1_bai2()
{
	int a = 0;
	int b = 0;

	printf("nhap a: ");
	scanf_s("%d", &a);
	printf("nhap b: ");
	scanf_s("%d", &b);

	int tong = a + b; 
	printf("TONG: %d \n", tong); 

	int hieu = a - b; 
	printf("HIEU: %d \n", hieu); 

	int tich = a * b;
	printf("TICH: %d \n", tich);

	float thuong = (float)a / b; 
	printf("THUONG: %.2f \n", thuong);	
}