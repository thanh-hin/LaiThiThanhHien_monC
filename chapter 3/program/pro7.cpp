#include <iostream>
using namespace std;
int main()//chương trình chính
{
    short testVar = 32767;//khai báo biến
    cout << testVar << endl;//hiển thị giá trị biến
    testVar = testVar + 1;//giá trị biến +1 ( 32767+1 vượt giới hạn biến)
    cout << testVar << endl;//hiển thị giá trị mới
    testVar = testVar - 1;// = giá trị mới -1
    cout << testVar << endl;//hiển thị giá trị sau khi trừ
    return 0;
}