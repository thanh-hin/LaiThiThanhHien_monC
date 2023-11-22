#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    int male, female;// khai báo biến số nam và nữ
    int total;//khai báo biến tổng số học sinh trong lớp
    cout <<"The number of males registered in a class: ";
    cin >> male;//nhập số học sinh nam
    cout <<"The number of females registered in a class: ";
    cin >> female;//nhập số học sinh nữ
    total = male + female;//tính tổng số học sinh
    cout << "The percentage of males in class: "<<1.0 * male / total <<endl;//tính tỉ lệ nam và hiển thị kết quả
    cout << "The percentage of females in class: "<<1.0 * female / total <<endl;//tính tỉ lệ nữ và hiển thị kết quả
    return 0;
}