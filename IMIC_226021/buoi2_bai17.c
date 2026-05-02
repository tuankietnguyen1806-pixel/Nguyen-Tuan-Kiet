#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void buoi2_bai17()
{
	int matkhau = 0;
	int tien = 0;
	int soduhientai = 5000000;
	

	printf("nhap mat khau: ");
	scanf("%d", &matkhau);

	switch (matkhau)
	{
	case 1234:
		printf("nhap so tien muon rut: ");
		scanf("%d", &tien);
		
		if (tien % 50000 != 0)
		{
			printf("so tien phai la boi so cua 50000");
		}
		else if (tien >= soduhientai)
		{
			printf("so du khong kha dung");
		}
		else
		{
			printf("Transaction Successful");
		}
		break;
	default:
		printf("sai mat khau");
		break;
	}



}