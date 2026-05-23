#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "lib.h"

void buoi5_bai3()
{
    char chuoi[] = "helloworld";
    char kytu = 'w';

    int x = vi_tri(chuoi,kytu);

    printf("vi tri cua %c la %d",kytu,x);
}