#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    char employed, recentGrad;//khai báo biến
    // hỏi người dùng có đang làm việc và mới tốt nghiệp hay ko
    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or ";
    cout << "N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;//nhập câu trả lời
    cout << "Have you graduated from college ";
    cout << "in the past two years? ";
    cin >> recentGrad;//nhập câu trả lời
    // xác định khoản vay
    if (employed == 'Y')
    {
        if (recentGrad == 'Y') // lồng if (đi làm và mới tốt nghiệp)
        {
            cout << "You qualify for the special ";
            cout << "interest rate.\n";
        }
        else // đi làm nhưng ko phải mới tốt ngiệp
        {
            cout << "You must have graduated from ";
            cout << "college in the past two\n";
            cout << "years to qualify.\n";
        }
        }
    else // không phải người đi làm
    {
        cout << "You must be employed to qualify.\n";
    }
    return 0;
}