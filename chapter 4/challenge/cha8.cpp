#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    // khai báo biến
    string color_1, 
           color_2;
    // nhập 2 màu sắc 
    cout << endl;
    cout << "Enter 1st primary color : ";
    cin >> color_1;
    cout << "The 2nd primary color is: ";
    cin >> color_2;
    // tính toán màu pha trộn và hiển thị kết quả
    if (color_1 == "red" || color_1 == "Red")
    {
        if (color_2 == "blue" || color_2 == "Blue")//đỏ và xanh dương ra tím
        {
            cout << color_1 << " & ";
            cout << color_2 << " = purple.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")//đỏ và vàng ra cam
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Orange.\n";
        }
    }
    else if (color_1 == "blue" || color_1 == "Blue")
    {
        if (color_2 == "red" || color_2 == "Red")//xanh dương và đỏ ra tím
        {
            cout << color_1 << " & ";
            cout << color_2 << " = purple.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")//xanh dương và vàng ra xanh lá
        {
            cout << color_1 << " & ";
            cout << color_2 << " = green.\n";
        }
    }
    else if (color_1 == "yellow" || color_1 == "Yellow")
    {
        if (color_2 == "red" || color_2 == "Red")//vàng và đỏ ra cam
        {
            cout << color_1 << " & ";
            cout << color_2 << " = orange.\n";
        }
        else if (color_2 == "blue" || color_2 == "Blue")//vàng và xanh dương ra xanh lá
        {
            cout << color_1 << " & ";
            cout << color_2 << " = green.\n";
        }
    }
    else//thông báo lỗi khi 2 màu nhập khác các màu cơ bản
    {
        cout << "Neither " << color_1;
        cout << " nor " << color_2;
        cout << " is a prime color. ";
        cout << "\nRun the program and try again.\n";
        cout << "Remember a primary color is either Red,";
        cout << "Blue, or Yellow.\n";
    }
    return 0;
}