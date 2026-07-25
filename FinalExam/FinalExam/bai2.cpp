#include <iostream>
#include <math.h>

using namespace std;

class phuongtrinhbac2
{
public:
    double a;
    double b;
    double c;

    phuongtrinhbac2(double hesoA, double hesoB, double hesoC)
    {
        a = hesoA;
        b = hesoB;
        c = hesoC;
    }

    void giaiphuongtrinh()
    {        
        if (a == 0) 
        {
            if (b == 0) 
            {
                if (c == 0) 
                {
                    cout << "Phuong trinh luon dung" << endl;
                }
                else 
                {
                    cout << "Phuong trinh vo nghiem" << endl;
                }
            }
            else 
            {
                cout << "Phuong trinh co 1 nghiem: x = " << -c / b << endl;
            }
            return;
        }

        double delta = b * b - 4 * a * c;

        if (delta < 0) 
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (delta == 0) 
        {
            double x = -b / (2 * a); 
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << x << endl;
        }
        else 
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
};

int main() 
{
    double a = 0, b = 0, c = 0;

    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    phuongtrinhbac2 Bieuthuc(a, b, c);
    Bieuthuc.giaiphuongtrinh();

    return 0;
}