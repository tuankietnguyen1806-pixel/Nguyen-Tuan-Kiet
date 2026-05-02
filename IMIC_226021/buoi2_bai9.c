#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai9()
{
	int n = 0;
	int k = 0;

	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	printf("vi tri 'k' can kiem tra: ");
	scanf("%d", &k);

	int a = (n >> k) & 1;

	switch (a)
	{
	case 1:
		printf("ON");
		break;
	case 0:
		printf("OFF");
		break;
	default:
		break;
	}
}