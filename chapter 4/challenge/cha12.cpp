#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    int number;
    double cost,discount;
    //nhập số hộp
    cout<<"Enter number of packages: ";
    cin>>number;
    //xác thực đầu vào
    while(number<=0)
    {
        cout<<"Invalid entry.-must be >0\n";
        cout<<"Enter number of packages: ";
        cin>>number;
    }
    //xác định chiết khấu 
    if(number>=100)
        discount=50;
    else if(number>=50)
        discount=40;
    else if(number>=20)
        discount=30;
    else if(number>=10)
        discount=20;
    else
        discount=0;  
    cost=number*99;
    cost=cost-(cost*(discount/100.));//tính tổng tiền
    cout<<"Total Cost: $"<<cost<<endl;//xuất tổng tiền
    return 0;
}