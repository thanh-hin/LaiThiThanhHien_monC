#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void showIntro();
double getCups();
double cupsToOunces(double);

int main()//hàm chính
{
    // khai báo biến
    double cups, ounces;
    cout << fixed << showpoint << setprecision(1);// formatting
    // Hiển thị màn hình giới thiệu
    showIntro();//gọi hàm showIntro
    // nhập số cốc
    cups = getCups();//nhập số cọc bằng hàm getCups
    // chuyển đổi
    ounces = cupsToOunces(cups);//gọi hàm cupsToOunces và truyền đối số cups
    // Hiển thị số ounce.
    cout << cups << " cups equals "
    << ounces << " ounces.\n";
    return 0;
}

void showIntro()//định nghĩa hàm showIntro
{
    //giới thiệu chương trình
    cout << "This program converts measurements\n"
        << "in cups to fluid ounces. For your\n"
        << "reference the formula is:\n"
        << " 1 cup = 8 fluid ounces\n\n";
}

//hàm nhập số cốc
double getCups()//định nghĩa hàm getCups
{
    double numCups;//khai báo biến
    cout << "Enter the number of cups: ";
    cin >> numCups;//nhập số cốc
    return numCups;//trả giá trị số cốc
}

//hàm chuyển đổi số cốc sang ounces
double cupsToOunces(double numCups)//định nghĩa hàm cupsToOunces
{
    return numCups * 8.0;//trả kết quả 
}