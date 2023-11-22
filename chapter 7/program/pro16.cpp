#include <bits/stdc++.h>
using namespace std;
void showValue(int);//khai bao ham void showValue voi bien nguyen
int main()
{
    const int SIZE = 8;//khai bao so luog phan tu trong mang
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};//khai bao mang number gom SIZE phan tu va co cac gia tri duoc gan lan luot
    for (int index = 0; index < SIZE; index++)//khoi tao vong lap goi cac bien trong mang va truyen vao ham showValue
    showValue(numbers[index]);
    return 0;
}
 void showValue(int n)
 {  //khoi tao ham void showValue voi bien nguyen n 
    cout << n << " ";//xuat ra bien n
 }