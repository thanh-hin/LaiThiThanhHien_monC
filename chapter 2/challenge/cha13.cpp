#include <iostream>
#include <math.h>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến
    double profit = 0.35,//lãi suất
            cost = 14.95,//giá gốc
            price = cost * (1+profit);//giá bán
    cout <<"The selling price of a circuit board : "<<price <<"$"<<endl;//hiển thị giá bán
    return 0;
}