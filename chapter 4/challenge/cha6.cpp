#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    float weight, mass;//khai báo biến
    //nhập khối lượng
    cout <<"Enter the mass: ";
    cin >> mass;//kg
    //tính trọng lượng
    weight = mass * 9.8;//newton
    //xác định trọng lượng có quá nặng hoặc quá nhẹ hay không
    if (weight > 1000)
        cout << "It is too heavy.";
    else if (weight < 10)
        cout <<"It is too light.";
    return 0;
}