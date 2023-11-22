#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    int x = 25;//khai báo biến
    int *ptr = nullptr;//Biến con trỏ, có thể trỏ tới int
    ptr = &x;//Lưu trữ địa chỉ của x trong ptr
    //Sử dụng cả x và ptr để hiển thị giá trị trong x.
    cout << "Here is the value in x, printed twice:\n";
    cout << x << endl;//hiển thi nội dung của x
    cout << *ptr << endl; //hiển thị nội dung của x
    *ptr = 100;//Gán 100 cho vị trí được trỏ bởi ptr. Cái này thực sự sẽ gán 100 cho x.
    // Sử dụng cả x và ptr để hiển thị giá trị trong x
    cout << "Once again, here is the value in x:\n";
    cout << x << endl;//hiển thi nội dung của x
    cout << *ptr << endl; //hiển thị nội dung của x
    return 0;
}