#include <bits/stdc++.h>
using namespace std;

bool isEven(int);//khai báo hàm 

int main()
{
    int val;//khai báo biến
    // nhập 1 số 
    cout << "Enter an integer and I will tell you ";
    cout << "if it is even or odd: ";
    cin >> val;
    // xác định số vừa nhập là chẵn hay lẻ
    //gọi hàm isEven và truyền biến val
    if (isEven(val))//trường hợp kết quả trả về của hàm isEven là true  
        cout << val << " is even.\n";
    else//trường hợp kết qủa trả về của hàm isEven là false
        cout << val << " is odd.\n";
    return 0;
}

//hàm kiểm tra số chẵn
bool isEven(int number)//định nghĩa hàm isEven
{
    bool status;//khai báo biến
    //xác định số đó có chia hết cho 2 không
    if (number % 2 == 0)
        status = true; // số đó là số chẵn nếu không có số dư 
    else
        status = false; // Ngược lại thì số đó là số lẻ.
    return status;//trả kết quả của biến status(true or false)
}