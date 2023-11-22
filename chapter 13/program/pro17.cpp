#include <iostream>
#include "IntegerList.h"
using namespace std;

int main()
{
    //khai báo hằng số
    const int SIZE = 20;
    IntegerList numbers(SIZE);
    int val, x;//khai báo biến

    // Lưu số 9 trong danh sách và hiển thị dấu hoa thị
    // mỗi lần số 9 được lưu trữ thành công
    for (x = 0; x < SIZE; x++)
    {
        numbers.setElement(x, 9);
        cout << "* ";
    }
    cout << endl;

    // Hiển thị số 9.
    for (x = 0; x < SIZE; x++)
    {
        val = numbers.getElement(x);
        cout << val << " ";
    }
    cout << endl;

    //Cố gắng lưu trữ một giá trị bên ngoài giới hạn của danh sách.
    numbers.setElement(50, 9);

    // hiển thị thông báo
    cout << "Element 50 successfully set.\n";

    return 0;
}
