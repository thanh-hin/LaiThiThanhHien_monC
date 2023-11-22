#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    const double AREA_SLICE = 14.125,
                PI = 3.14159;
    double diameter,
            radius,
            slicesNeeded,
            areaPizza,
            slices,
            pizza,
            people;
    //hỏi người dùng đường kính bánh
    cout <<"The diameter of the pizza in inches: ";
    cin >> diameter;
    //tính bán kính
    radius = diameter /2;
    //tính diện tích bánh pizza
    areaPizza = PI * pow(radius,2);
    // tính số lát bánh
    slices = areaPizza / AREA_SLICE;
    //hỏi số người
    cout <<"what is the number of people who will be at the party?";
    cin >> people;
    //tính số lát cần
    slicesNeeded = people * 4;
    //tính số bánh cần
    pizza = slicesNeeded / slices;
    //hiển thị số bánh cần mua
    cout <<"The number of pizzas to order = "<<setprecision(0)<<fixed<<pizza<<endl;
    return 0;
}