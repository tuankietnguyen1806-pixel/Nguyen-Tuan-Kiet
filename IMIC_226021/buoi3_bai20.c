#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai20()
{
    int h = 0;

    printf("nhap chieu cao h: ");
    scanf("%d", &h);

    if (h % 2 == 0)
    {
        printf("h phai la so le");
        return;
    }

    int a = h / 2 + 1; 

    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= a - i-1; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2*i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = a - 1; i >= 1 ; i--)
    {
        for (int j = 1 ; j <= a - i; j++)
        {
            printf(" ");
        }

        for (int j = 1 ; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }


}