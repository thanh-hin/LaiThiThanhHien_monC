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
    //tính bình phương 
    while (num <= MAX_NUMBER)//điều kiện num <=10
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; //tăng num lên 1
    }
    return 0;
}