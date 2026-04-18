#include<stdio.h>
#include<math.h>

void giai_ptr_bac_2()
{
	int a, b, c, delta; 
	float x1, x2;

	printf("nhap a: ");
	scanf_s("%d", &a);
	printf("nhap b: ");
	scanf_s("%d", &b);
	printf("nhap c: ");
	scanf_s("%d", &c);

	delta = b*b - 4 * a * c; 

	if (delta > 0)
	{
		x1 = (- b  - sqrt(delta)) / (2*a);
		x2 = (- b  + sqrt(delta)) / (2*a);
		printf("phuong trinh co 2 nghiem");
		printf("x1 = %f\n, x1");
		printf("x2 = %f\n, x2");
	}

	if (delta == 0)
	{
		x1 = -b / (2.0f * a);
		printf("phuong trinh co 1 nghiem");
		printf("x1 = %f\n, x1");
	}

	else
		printf("phuong trinh vo nghiem");

	return 0;
	
}
