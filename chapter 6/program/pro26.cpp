#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
//sử dụng biến tham chiếu làm tham số
void doubleNum(int &);
void getNum(int &);

int main()//hàm chính
{
    int value;//khai báo biến
    // nhập 1 số và lưu trữ giá trị trong biến value
    getNum(value);//gọi hàm getNum
    // nhân đôi 1 số và lưu trữ giá trị trong biến value
    doubleNum(value);//gọi hàm doubleNum
    // hiển thị giá trị của value
    cout << "That value doubled is " << value << endl;
    return 0;
}

//hàm nhập số
void getNum(int &userNum)//định nghĩa hàm getNum
{
    //nhập 1 số
    cout << "Enter a number: ";
    cin >> userNum;
}

//hàm nhân đôi
void doubleNum (int &refVar)//định nghĩa hàm doubleNum
{
    refVar *= 2;//nhân đôi số
}