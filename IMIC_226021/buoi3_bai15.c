#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi3_bai15()
{
	int n = 0;
	int f0 = 0;
	int f1 = 1;
	int fn = 0;


	printf("nhap n: ");
	scanf("%d", &n);
	
	printf("%d", f0);
	printf(" %d", f1);

	for (int i = 0; i <= n; i++)
	{
		fn = f0 + f1;
		printf(" %d", fn);
		f0 = f1;
		f1 = fn; 
	}
}