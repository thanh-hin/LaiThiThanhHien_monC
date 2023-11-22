#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    long double apple;//khai báo biến
    cout << "The size of an integer is " << sizeof(int);//hiển thị kích thước của kiểu dữ liệu int
    cout << " bytes.\n";
    cout << "The size of a long integer is " << sizeof(long);//hiển thị kích thước của kiểu dữ  liệu long
    cout << " bytes.\n";
    cout << "An apple can be eaten in " << sizeof(apple);//hiển thị kích thước của biến apple
    cout << " bytes!\n";
    return 0;
}