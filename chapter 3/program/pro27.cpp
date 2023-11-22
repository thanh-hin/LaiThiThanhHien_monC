#include <iostream>
using namespace std;
int main()//chương trình chính
{
    double num1, num2, num3, avg;//khai báo biến
    cout << "Enter the first number: ";
    cin >> num1;//nhập số thứ nhất
    cout << "Enter the second number: ";
    cin >> num2;//nhập số thứ 2
    cout << "Enter the third number: ";
    cin >> num3;//nhập số thứ 3
    //lỗi thiếu ngoặc ()
    avg = num1 + num2 + num3 / 3;//tính giá trị trung bình 
    cout << "The average is " << avg << endl;//hiển thị kết quả
    return 0;
}