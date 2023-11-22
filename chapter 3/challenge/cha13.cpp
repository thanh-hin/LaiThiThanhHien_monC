#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    // khai báo biến hằng
    const float YEN_PER_DOLLAR   = 111.51,
                EUROS_PER_DOLLAR = 0.85;
    // khai báo biến
    float user_amount,
          dollar_to_yen,
          dollar_to_euro;
    //nhập số tiền dola muốn đổi
    cout << "Enter U.S. dollar amount: ";
    cin >> user_amount;
    // công thức chuyển đổi
    dollar_to_yen = user_amount * YEN_PER_DOLLAR;
    dollar_to_euro = user_amount *EUROS_PER_DOLLAR;
    cout << setprecision(2) << fixed << endl;//formatting
    //hiển thị kết quả
    cout << "Dollar   amount = $"  << user_amount;
    cout << "\nYen      amount = ¥" << dollar_to_yen;
    cout << "\nEuro     amount = €" << dollar_to_euro;
    return 0;
}