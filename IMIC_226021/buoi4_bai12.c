#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi4_bai12()
{
	int n = 0;
	int a[100] = { 0 };
    int temp = 0;

	printf("nhap n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}