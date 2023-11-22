#include <iostream>
#include <string>
#include <iomanip>
#include "FreezeBoil.h"
using namespace std;

int main()
{
    //tạo đối tượng FreezeBoil
    FreezeBoil temp;
    //nhập nhiệt độ hiện tại
    cout << "Current temperature is: ";
    cout << temp.getTemperature();

    //biến để lưu trữ dữ liệu đầu vào của người dùng
    int t;
    //nhập nhiệt độ người dùng muốn
    cout << "\nEnter your temperature of choice:";
    cin >> t;
    //chỉnh nhiệt độ
    temp.setTemperature(t);

    //hiển thị thông báo cuối cùng
    cout << endl;
    temp.display();
    return 0;
}