#include <iostream>
using namespace std;

// khai báo class
class Demo
{
public:
    // Khai báo hàm tạo
    Demo();
    // Khai báo hàm hủy
    ~Demo();
};

// Định nghĩa hàm tạo cho lớp Demo
Demo::Demo()
{
    cout << "Welcome to the constructor!\n";
}

// Định nghĩa hàm hủy cho lớp Demo
Demo::~Demo()
{
    cout << "The destructor is now running.\n";
}

int main()
{
    // Tạo một đối tượng của lớp Demo, gọi hàm tạo
    Demo demoObject;
    // Hiển thị thông báo để minh họa chương trình
    cout << "This program demonstrates an object\n";
    cout << "with a constructor and destructor.\n";
    return 0;
}