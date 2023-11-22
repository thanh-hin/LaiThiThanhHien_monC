#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    int n, i, j;//khia báo biến
    n = 3;// số hàng = 3
    cout <<"Ve tam giac deu\n";
    for (i = 0; i<=n;i++)//lặp n+1 hàng
    {
        for (j = 0; j <n-1;j++)//in liền giảm dần số space
            cout <<" ";
        for (j = 0;j <i*2-1;j++)//in số * theo số lẻ bắt đầu từ 1
            cout <<"*";
        cout <<"\n";
    }
    return 0;
}