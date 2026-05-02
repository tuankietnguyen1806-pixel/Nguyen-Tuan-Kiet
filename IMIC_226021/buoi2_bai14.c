#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void buoi2_bai14()
{
    float height = 0;
    float weight = 0;
    float bmi = 0;

    printf("Nhap chieu cao m: ");
    scanf("%f", &height);
    printf("Nhap can nang kg: ");
    scanf("%f", &weight);

    if (height <= 0 || weight <= 0)
    {
        printf("Du lieu khong hop le\n");
        return;
    }

    bmi = weight / (height * height);

    printf("BMI = %f \n", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight");
    }
    else if (bmi < 25)
    {
        printf("Normal");
    }
    else if (bmi < 30)
    {
        printf("Overweight");
    }
    else
    {
        printf("Obese");
    }
}