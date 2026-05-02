#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai8()
{
	int a = 0;

	printf("nhap so nguyen a: ");
	scanf("%d", &a);

    switch (a)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("thang %d co 31 ngay\n", a);
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("thang %d co 30 ngay\n", a);
        break;

    case 2:
        printf("thang %d co 28 ngay\n", a);
        break;
    default:
        printf("thanh khong hop le");
        break;
    }
}
