#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "lib.h"

void buoi5_bai2()
{
    char chuoi[] = "helloworld";

    char* x = in_hoa(chuoi);

    printf("chuoi sau thay doi: %s", x);
}