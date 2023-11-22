#include <iostream>
using namespace std;
int main ()
{
    //khai báo biến
    const int MIN_NUMBER = 1,
              MAX_NUMBER = 10;
    int num = MIN_NUMBER;//gán giá trị
    cout << "Number Number Squared\n";
    cout << "-------------------------\n";
    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)//khởi tạo num = 1, điều kiện num <=10
        cout << num << "\t\t" << (num * num) << endl;//xuất bình phương số sau đó +1 cho num xét điều kiện tiếp
    return 0;
}