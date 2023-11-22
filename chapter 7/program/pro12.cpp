#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int SIZE = 5;//khai bao hang nguyen SIZE
    int numbers[5];//khai bao mang nguyen numbers gom 5 phan tu
    for (int &val : numbers)
    {//khoi tao vong lap de nhap vao cac gia tri cua mang
        cout << "Enter an integer value: ";
        cin >> val;
    }
    cout << "Here are the values you entered:\n";//khoi tao vong lap de xuat ra gia tri cua cac phan tu trong mang
    for (int val : numbers)
        cout << val << endl;
    return 0;
}