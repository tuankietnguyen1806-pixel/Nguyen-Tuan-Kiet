#include <stdio.h>
void buoi2_bai3()
{
	float r = 0; 
	float pi = 3.14; 

	printf("nhap r = ");
	scanf_s("%f", &r);

	float S = r * r * pi;
	printf("Dien tich: %.2f \n", S);

	float C = r * 2 * pi;
	printf("Chu vi: %.2f", C);

}