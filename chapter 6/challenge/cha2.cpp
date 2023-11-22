#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
double inputValidate(double num);
double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

int main()//hàm chính
{
    //khai báo biến
    double length,//chiều dài
           width,//chiều rộng
           area;//diện tích

    length = getLength(length);//gán biến chiều dài = hàm getLength (giá trị num trả về)
    width  = getWidth(width);//gán biến chiều rộng = hàm getWWidth (giá trị num trả về)
    area   = getArea(length, width);//gán biến diện tích = hàm getArea 
    displayData(length, width, area);//hiển thị kết quả bằng hàm displayData

    return 0;
}

//hàm nhập chiều dài 
double getLength(double num)//định nghĩa hàm getLength
{
    //nhập chiều dài
    cout << "Enter rectangle's length: ";
    num = inputValidate(num);//gán biến num = giá trị trả lại của hàm inputValidate
    return num;//trả lại giá trị biến num vừa gán trong hàm getLength
}

//hàm nhập chiều rộng
double getWidth(double num)//định nghĩa hàm getWidth
{
    //nhập chiều rộng
    cout << "Enter rectangle's width: ";
    num = inputValidate(num);//gán biến num = giá trị trả lại của hàm inputValidate
    return num; //trả lại giá trị biến num vừa gán trong hàm getWidth
}

//hàm tính diện tích 
double getArea(double length, double width)//định nghĩa hàm getArea
{
    return length * width;//trả kết quả diện tích
}

//hàm hiển thị kết quả
void displayData(double l, double w, double a)//định nghĩa hàm
{
    //hiển thị các thông tin
    cout << "Length = " << l << endl;
    cout << "Width  = " << w << endl;
    cout << "Area   = " << a << endl;
}

//hàm xác thực đầu vào 
double inputValidate(double num)//định nghĩa hàm inputValidate
{
    while(!(cin >> num))
    {
        //báo lỗi 
        //yêu cầu nhập số num lớn hơn 0
        //nhập lại
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1200, 'n');
    }
    return num;//trả giá trị num
}