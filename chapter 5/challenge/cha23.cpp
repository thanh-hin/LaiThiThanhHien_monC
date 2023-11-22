#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo biến hằng
    const int MINIMUM = 0,
              MAXIMUM = 10;
    char symbol = '+';//khai báo biến kí tự symbol và gán giá trị
    cout << "\nPatter A: " << endl;
    //tạo vòng lặp
    for(int i = MINIMUM; i < MAXIMUM; i++)//hàng ngang
    {
        for(int j = MINIMUM; j <= i; j++)//hàng dọc
            cout << symbol;//xuất kí tự "+"
        cout << endl;
    }
    cout << "\nPatter B: " << endl;
    //tạo vòng lặp
    for(int i = MINIMUM; i < MAXIMUM; i++)//hàng ngang
    {
        for(int j = MAXIMUM; j > i; j--)//hàng dọc
            cout << symbol;//xuất kí tự "+"
        cout << endl;
    }
    return 0;
}