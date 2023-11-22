#include <bits/stdc++.h>
using namespace std;

void doubleNum(int &);//khai báo hàm với tham số là một biến tham chiếu

int main()//hàm chính
{
    int value = 4;//khai báo biến
    cout << "In main, value is " << value << endl;//hiển thị giá trị của biến value
    cout << "Now calling doubleNum..." << endl;
    doubleNum(value);//gọi hàm doubleNum và truyền biến value 
    cout << "Now back in main. value is " << value << endl;//hiển thị lại giá trị của biến value
    return 0;
}

//hàm nhân đôi 1 số
void doubleNum (int &refVar)//địn nghĩa hàm doubleNum
{
    refVar *= 2;//nhân đôi biến
}