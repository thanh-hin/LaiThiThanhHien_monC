#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    char employed,
         recentGrad; 
    // hỏi người dùng có đi làm và mới tốt nghiệp ko
    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;
    cout << "Have you graduated from college "
    << "in the past two years? ";
    cin >> recentGrad;
    // xác định khonar vay của người dùng
    if (employed == 'Y' && recentGrad == 'Y')//đồng thời vừa đi làm vừa tốt nghiệp thì thực thi lệnh xuất
    {
        cout << "You qualify for the special "
             << "interest rate.\n";
    }
    else//các trường hợp khác
    {
        cout << "You must be employed and have\n"
             << "graduated from college in the\n"
             << "past two years to qualify.\n";
    }
    return 0;
}