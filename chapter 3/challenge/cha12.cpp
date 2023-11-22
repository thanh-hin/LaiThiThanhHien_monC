#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    // khai báo biến
    double F, C;// độ F và độ C
    //nhập độ C
    cout <<"Enter the Celsius Temperature: ";
    cin >> C;
    //tính độ F
    F = (9/5) * C + 32;
    //hiển thị kết quả đổi độ C sang độ F
    cout << C <<"C = " << F <<"F\n";
    return 0;
}