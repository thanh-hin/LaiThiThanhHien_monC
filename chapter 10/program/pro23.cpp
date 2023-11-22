#include <bits/stdc++.h>
using namespace std;

void dollarFormat(string &);//khai báo hàm

int main()//hàm chính
{
    string input;//khai báo chuỗi 
    //nhập số tiền
    cout << "Enter a dollar amount in the form nnnnn.nn : ";
    cin >> input;
    dollarFormat(input);//gọi hàm dollarFormat
    //hiển thị định dạng số tiền
    cout << "Here is the amount formatted:\n";
    cout << input << endl;
    return 0;
}

//hàm định dạng lại số tiền
void dollarFormat(string &currency)//định nghĩa hàm
{
    int dp;//khai báo biến
    dp = currency.find('.'); // Tìm dấu thập phân
    // Chèn dấu phẩy
    if (dp > 3)
    {
        for (int x = dp - 3; x > 0; x -= 3)
            currency.insert(x, ",");
    }
    currency.insert(0, "$"); // Chèn ký hiệu đô la
}