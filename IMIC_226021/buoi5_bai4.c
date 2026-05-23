#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "lib.h"

void buoi5_bai5()
{
    char A[] = "helloworld";
    char B[] = "world";

    int x = kiem_tra(A, B);

    if ( x == 1)
    {
        printf("B nam trong A");
    }
    else
    {
        printf("B khong nam trong A");
    }
}