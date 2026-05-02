#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void buoi2_bai16()
{
    int n = 0;

    printf("Nhap so nguyen tu 0 den 9: ");
    scanf("%d", &n);

    switch (n)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    default:
        printf("Invalid number");
        break;
    }
}