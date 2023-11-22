#include <iostream>
#include <cmath>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    double test1, test2, test3;//biến điểm
    double average;//trung bình điểm
    // Get nhập 3 điểm kiểm tra
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
    cout << "Enter the third test score: ";
    cin >> test3;
    // tính điểm trung bình điểm
    average = (test1 + test2 + test3) / 3.0;
    // hiển thị kết quả
    cout << "The average score is: " << average << endl;
    return 0;
}