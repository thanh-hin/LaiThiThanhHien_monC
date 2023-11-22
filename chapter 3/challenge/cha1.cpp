#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    double gallon, //khai báo biến số xăng chữa được mile,//khai báo biến số dân xe đi được
           mile, //khia báo biến số dặm xe đi dược
           perGallonGas;//khai bảo biến mỗi gallon xăng đi được bao nhiêu dân 
    cout <<"enter the number of gallons of gas the car can hold: ";
    cin >> gallon;//nhập biến xăng
    cout << "enter the number of miles it can be driven on a full tank: ";
    cin >> mile;//nhập biến quảng đường
    perGallonGas - mile / gallon;//công thức tính môi gallon đi được bao nhiêu dặm 
    cout <<"the number of miles that may be driven per gallon of gas: "<< perGallonGas;//hiển thị kết quả
    return 0;
}