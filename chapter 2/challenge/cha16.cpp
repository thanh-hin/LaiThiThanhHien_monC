#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    int n, i, j;//khai báo biến
    n = 3;//số hàng
    cout <<"Ve ta giac deu\n";
    for(i = 0; i <= n; i++)//lặp n +1 hàng
    {
        for(j = 0; j < n - i; j++)//in liền giảm dần số space
            cout <<" ";
        for (j = 0;j <i*2+1;j++)//in số * theo số lẻ bắt đầu từ 1
            cout <<"*";
        cout <<"\n";
    }
    for(i = 1; i <= n; i++)//lặp n hàng
    {
        for(j = 0; j < i; j++)//in số space tăng dần
            cout  <<" ";
        for(j = (n)*2 - i; j > i -1; j--)//in số sao giảm dần theo số lẻ
            cout <<"*";
        cout <<"\n";
    }
    return 0;
}