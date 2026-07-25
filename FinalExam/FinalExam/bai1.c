#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printByte(unsigned short x)
{
    unsigned char* px = (unsigned char*) &x;

    unsigned char low = *px;
    unsigned char high = *(px + 1);

    printf("Byte cao : %d (0x%02X)\n", high, high);
    printf("Byte thap: %d (0x%02X)", low, low);
}

int main()
{
    unsigned short a = 0;

    printf("Nhap so nguyen: ");
    scanf("%hu", &a);

    printByte(a);

    return 0;
}