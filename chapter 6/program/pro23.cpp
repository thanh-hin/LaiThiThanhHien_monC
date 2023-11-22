#include <bits/stdc++.h>
using namespace std;

void showStatic();//khai báo hàm

int main()//hàm chính
{
    // gọi hàm showStatic ̀5 lần
    for (int count = 0; count < 5; count++)
        showStatic();
    return 0;
}

void showStatic()//định nghĩa hàm showStatic
{
    static int statNum = 5;//khai báo và gán giá trị cho biến
    cout << "statNum is " << statNum << endl;//hiển thị giá trị của biến
    statNum++;//tăng giá trị của biến lên 1
    //static :  giá trị của biến trong những lần gọi trước đó được lưu lại và được sử dụng để thực hiện thông qua các lượt gọi hàm tiếp theo
}