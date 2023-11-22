#include <bits/stdc++.h>
using namespace std;

int main()
{
    //khai báo biến hằng
    const int MIN_VALUE = 1,
              MAX_VALUE = 10;
    //khai báo biến 
    int random_num,//số ngẫu nhiên
        user_num;//số dự đoán
    //tạo bộ số ngẫu nhiên từ hệ thống
    unsigned seed = time(0);
    srand(seed);
    random_num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;//tạo số ngẫu nhiên
    //nhập dự đoán của người dùng
    cout << "Guess a number between 1 and 10." << endl;
    cin >> user_num;
    //xác định số người dùng đoán có chính xác hay không
    while (user_num != random_num)//nếu số dự đoán không trùng với số của máy tính thì vô vòng lặp
    {
        //hiển thị thông báo sai và kêu thử lại
        cout << "Your number is "<< (user_num < random_num ? "lower." : "higher.");
        cout << "Try again: ";
        //nhập lại só dự đoán
        cin >> user_num;
    }
    //hiển thị chúc mừng người dùng dự đoán đúng
    cout << "\nCorrect! " << endl;
    cout << "Random number = " << random_num << endl;
    cout << "Your guess    = " << user_num   << endl;
    return 0;
}