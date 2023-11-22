#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    const double AREA_SLICE = 14.125,
                PI = 3.14159;
    double diameter,
            radius,
            areaPizza;
    int slices;
    //hỏi người dùng đường kính bánh
    cout <<"The diameter of the pizza in inches: ";
    cin >> diameter;
    //tính bán kính
    radius = diameter /2;
    //tính diện tích bánh pizza
    areaPizza = PI * pow(radius,2);
    // tính số lát bánh
    slices = areaPizza / AREA_SLICE;
    //hiển thị số lát bánh
    cout <<"The number of slices: " << slices <<endl;
    return 0;
}