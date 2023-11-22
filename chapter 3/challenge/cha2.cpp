#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    double classA, classB, classC; //khai báo biến số vé bán được ở mỗi hạng ghế
    double total;//khai báo biến số tiền bán được từ việc bán vé
    double costA = 15, //khai báo biến giá vé hạng A
            costB = 12,//khai báo biến giá vé hạng B
            costC = 9;//khai báo biến giá vé hạng C
    cout <<"how many tickets for class A of seats were sold ";
    cin >> classA;//nhập số vé bán được ở hạng A
    cout <<"how many tickets for class B of seats were sold ";
    cin >> classB;//nhập số vé bán được ở hạng B
    cout <<"how many tickets for class C of seats were sold ";
    cin >> classC;//nhập số vé bán được ở hạng C
    total = classA * costA + classB * costB + classC * costC;//tính tổng tiền bán được từ các hạng vé
    cout <<"The amount of income generated from ticket sales: "<<setprecision(2)<<fixed<<total<<endl;//hiển thị kết quả
    return 0;
}