#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    double wavelength;//khai báo biến bước sóng
    cout << "The wavelength of an electromagnetic wave in meters : ";
    cin >> wavelength;//nhập bước sóng
    //xác định bước sóng là sóng điện từ nào
    if (wavelength >= 1E-2)
        cout <<"Radio waves.\n";
    else if (wavelength <= 1E-2 && wavelength >= 1E-3)
        cout <<"Microwaves.\n";
    else if (wavelength <= 1E-3 && wavelength >= 7E-7)
        cout <<"Infrared.\n";
    else if (wavelength <= 7E-7 && wavelength >= 4E-7)
        cout <<"Visible light.\n";
    else if (wavelength <= 4E-7 && wavelength >= 1E-8)
        cout <<"Ultraviolet.\n";
    else if (wavelength >= 1E-8 && wavelength >= 1E-11)
        cout <<"X rays.\n";
    else if (wavelength <= 1E-11)
        cout <<"Gramma rays.\n";
    return 0;
}