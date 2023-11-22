#include <iostream>
#include <iomanip>
using namespace std;
int main()//chương trình chính
{
    int num1 = 2897, num2 = 5, num3 = 837,
        num4 = 34, num7 = 390, num5 = 7,
        num6 = 1623, num8 = 3456, num9 = 12;
    // dùng lệnh setw canh chỉnh cột
    // Hiển thị hàng số đầu tiên
    cout << setw(6) << num1 << setw(6)
        << num2 << setw(6) << num3 << endl;
    // Hiển thị hàng số thứ hai
    cout << setw(6) << num4 << setw(6)
        << num5 << setw(6) << num6 << endl;
    // Hiển thị hàng số thứ ba
    cout << setw(6) << num7 << setw(6)
        << num8 << setw(6) << num9 << endl;
    return 0;
}