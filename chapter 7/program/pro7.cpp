#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int SIZE = 9;//kích thước mảng
    //khai báo biến tên hành tinh
    string planets[SIZE] = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto (a dwarf planet)" };
    cout << "Here are the planets:\n";
    //hiển thị tên hành tinh 
    for (int count = 0; count < SIZE; count++)
        cout << planets[count] << endl;
    return 0;
}