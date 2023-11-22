#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo 3 chuỗi 
    string str1, str2, str3;
    // gán giá trị cho cả 3 chuỗi
    str1 = "ABC";
    str2 = "DEF";
    str3 = str1 + str2;
    // Sử dụng chỉ số dưới để hiển thị str3 từng ký tự một
    for (int x = 0; x < str3.size(); x++)
        cout << str3[x];
    cout << endl;
    // So sánh str1 với str2
    if (str1 < str2)
        cout << "str1 is less than str2\n";
    else
        cout << "str1 is not less than str2\n";
    return 0;
}