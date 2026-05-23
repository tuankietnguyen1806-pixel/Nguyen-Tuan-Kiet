#include "lib.h"


int cong_so_nguyen(int so_1, int so_2)
{
	int ketqua = 0;
	ketqua = so_1 + so_2;
	return ketqua;
}

int phep_nhan(int so_nguyen_1, int so_nguyen_2)
{
	int ketqua = 0;
	for (int i = 0; i < so_nguyen_2; i++)
	{
		ketqua = cong_so_nguyen(ketqua, so_nguyen_1);
	}
	return ketqua;
}

int dem_so_ky_tu(char* str)
{
	int dem = 0;

	while (*str != 0)
	{
		str++;
		dem++;
	}

	return dem;
}

int arr_sum(int* arr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int my_strlen(char* my_strlen)
{
	int dem = 0;

	while (*my_strlen != 0)
	{
		my_strlen++;
		dem++;
	}

	return dem;
}

char* in_hoa(char* in_ky_tu)
{
	char* p = in_ky_tu;

	while (*p != 0)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}

		p++;
	}

	return in_ky_tu;
}

int vi_tri(char* vi_tri_str, char ky_tu)
{
	int dem = 0;
	char* p = vi_tri_str;
	char kytu = ky_tu;

	while (*p != kytu)
	{
		*p++;
		dem++;
	}

	return dem;
}

char* noi_chuoi(char* chuoi_1, char* chuoi_2)
{
	char* p = chuoi_1;
	char* px = chuoi_2; 


	while (*p != 0)
	{
		p++;
	}

	while (*px != 0)
	{
		*p = *px;
		px++;
		p++;
	}
	*p = 0;
	return chuoi_1;
}

int kiem_tra(char* A, char* B)
{
	char* p = A;

	while (*p != 0)
	{
		char* temp1 = p;
		char* temp2 = B;

		while (*temp1 == *temp2 && *temp2 != 0)
		{
			temp1++;
			temp2++;
		}

		if (*temp2 == 0)
		{
			return 1;
		}

		p++;
	}

	return 0;
}