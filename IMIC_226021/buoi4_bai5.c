#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai5()
{
	int n = 0;
	int a[100] = { 0 };
	int vitri = 0;
	int x = 0;

	printf("nhap so phan tu trong mang: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printf("nhap so x can tim: ");
	scanf("%d", &x);

	for (int i = n -1; i >= 0; i++)
	{
		if (a[i] = x)
		{
			vitri = i;
			break;
		}
	}

	printf("x xuat hien cuoi cung o vi tri thu %d", vitri);

}
