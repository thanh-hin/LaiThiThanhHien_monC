#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    double a = 1.5;
    double b = 1.5;
    a += 0.0000000000000001; // cộng vô a 1 số rất nhỏ
    if (a == b)//khởi tạo điều kiện
    cout << "Both a and b are the same.\n";//nếu a = b thì hiển thị nội dung này 
    else
    cout << "a and b are not the same.\n";//nếu a khác b thì hiển thị nội dung này
    return 0;
}