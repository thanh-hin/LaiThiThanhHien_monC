#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    char feedGrade;
    // nhập loại thức ăn cần
    cout << "Our pet food is available in three grades:\n";
    cout << "A, B, and C. Which do you want pricing for? ";
    cin >> feedGrade;
    // hiển thị giá tiền
    switch(feedGrade)
    {
        // break để ngừng lệnh
        case 'a':
        case 'A': cout << "30 cents per pound.\n";
                break;
        case 'b':
        case 'B': cout << "20 cents per pound.\n";
                break;
        case 'c':
        case 'C': cout << "15 cents per pound.\n";
                break;
        default: cout << "That is an invalid choice.\n";
    }
    return 0;
}