#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2, str3;//khai báo 3 chuỗi
    // Gán giá trị cho cả ba chuỗi
    str1 = "ABC";
    str2 = "DEF";
    str3 = str1 + str2;
    // hiển thị nội dung 3 chuỗi
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    // Nối một chuỗi vào str3 và hiển thị nó
    str3 += "GHI";
    cout << str3 << endl;
    return 0;
}