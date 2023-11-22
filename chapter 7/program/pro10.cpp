#include <iostream>
using namespace std;
int main()
{
    int numbers[] = { 10, 20, 30, 40, 50 };//mảng có 5 phần tử
    //hiển thị giá trị trong mảng
    for (int val : numbers)//duyệt mảng
        cout << val << endl;
    return 0;
}