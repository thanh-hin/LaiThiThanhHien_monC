#include <iostream>
#include <string>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    string name;//chuỗi tên
    string city;//cuỗi thành phố
    cout << "Please enter your name: ";
    getline(cin, name);//nhập tên
    cout << "Enter the city you live in: ";
    getline(cin, city);//nhập thành phố
    //hiển thị nội dung
    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;
    return 0;
}