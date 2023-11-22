#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    int number = 12345;//khai báo biến
    int rightMost = number % 10;//khai báo + gán biểu thức
    //hiển thị kết quả
    cout << "The rightmost digit in "
        << number << " is "
        << rightMost << endl;
    return 0;
}