#include <iostream>
using namespace std;
int main()//chương trình chính
{
    float test;// khai báo biến
    test = 2.0e38 * 1000;//gắn công thức tính
    cout << test << endl;//xuất kiểm tra có overflow ko
    test = 2.0e-38 / 2.0e38; //  gán công thức tính
    cout << test << endl;//xuất kiểm tra có underflow ko
    return 0;
}