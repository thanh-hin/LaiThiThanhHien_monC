#include <iostream>
using namespace std;
int main()//chương trình chính
{
    char ch;//khai báo biến kí tự
    cout << "This program has paused. Press Enter to continue.";
    cin.get(ch);//dùng để pause chương trình đang chạy
    cout << "It has paused a second time. Please press Enter again.";
    ch = cin.get();
    cout << "It has paused a third time. Please press Enter again.";
    cin.get();
    cout << "Thank you!";
    return 0;
}