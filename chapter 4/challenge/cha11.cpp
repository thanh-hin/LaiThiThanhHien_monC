#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khởi tạo bộ số ngẫu nhiên
    unsigned int seed = time(0);
    srand(seed);
    int userAnswer;//khai báo biến đáp án của người dùng
    //khởi tạo 2 số ngẫu nhiên
    int num1, num2, answer; //khai báo biến
    num1 = rand();
    num2 = rand();
    //hiển thị phép toán
    cout << "    " << num1 << endl;
    cout << "+"<<endl;
    cout << "   " << num2 << endl;
    //yêu cầu nhập câu trả lời
    cout << "Enter your answer: ";
    cin >> userAnswer;
    //kiểm tra đáp án của người dùng
    if (userAnswer == answer)
        cout <<"Congratulations!" << endl;
    else 
        cout << "Oop.correct answer here: " << answer << endl;
    return 0;
}