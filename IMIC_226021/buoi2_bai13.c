#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void buoi2_bai13()
{
	int x = 0;
	int y = 0;

	printf("nhap toa do x: ");
	scanf("%d", &x);
	printf("nhap toa do y: ");
	scanf("%d", &y);

	if (x == 0)
	{
		printf("diem nam tren truc tung voi toa do (%d,%d)", x, y);
	}
	else if (y == 0)
	{
		printf("diem nam tren truc hoanh voi toa do (%d,%d)", x, y);
	}
	else if ( x > 0 && y > 0)
	{
		printf("diem nam o goc phan tu I voi toa do (%d,%d)", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("diem nam o goc phan tu II voi toa do (%d,%d)", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("diem nam o goc phan tu III voi toa do (%d,%d)", x, y);
	}
	else if (x > 0 && y < 0)
	{
		printf("diem nam o goc phan tu IV voi toa do (%d,%d)", x, y);
	}
	else {}
}