// bài tập thuật toán rút tiền ATM cơ bản

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void buoi2_ATM()
{
	int matkhau = 0;
	int tien = 0;
	char a; 
	int tienconlai = 1000000;
	int buoc = 1;
	int pw = 1234; 
	int solansai = 0; 

	while (buoc != 5)
	{
		switch (buoc)
		{
		case 1:

			printf("nhap mat khau: ");
			scanf("%d", &matkhau);

			if (matkhau == pw)
				buoc = 2;
			else
			{
				solansai++;
				if (solansai == 3)
				{
					printf("ban da nhap sai 3 lan");
					buoc = 5;
				}
				else buoc = 6;		
			}
			

			break; 

		case 2: 

			printf("nhap so tien: ");
			scanf("%d", &tien);
			buoc = 3;

			break;

		case 3: 
			
			if (tien <= tienconlai)
				buoc = 4;
			else
				buoc = 2;
			
			break;

		case 4: 

			printf("so tien khach hang rut: %d", tien);
			buoc = 5;
			
			break;

		case 6:
			
			printf("co muon tiep tuc khong: ");
			scanf(" %c", &a);
			
			if (a == 'c')								// 'c': Có
				buoc = 1;
			else if (a == 'k' )							// 'k': Không
				buoc = 5;
			break;
		}
	}
}