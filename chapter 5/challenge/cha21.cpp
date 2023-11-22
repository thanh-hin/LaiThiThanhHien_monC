#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo biến hằng
    const int MIN_VALUE = 1,
              MAX_VALUE = 10;
    //khai báo biến
    int random_num,//số ngẫu nhiên từ máy
        user_num,//số dự đoán
        number_of_guesses = 0;//bộ tích lũy số lần dự đoán
    //tạo booso số ngẫu nhiên tự hề thống
    unsigned seed = time(0);
    srand(seed);
    random_num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;//tạo số ngẫu nhiên
    //nhập số dự đoán
    cout << "Guess a number between 1 and 10." << endl;
    cin >> user_num;
    number_of_guesses++;//tăng bộ tích lũy lên 1
    while (user_num != random_num)//nếu số dự đoán không trùng với số của máy tính thì vô vòng lặp
    {
        //hiển thị thông báo và thử lại
        cout << "Your number is "<< (user_num < random_num ? "lower." : "higher.");
        cout << "Try again: ";
        cin >> user_num;//nhập lại dự đoán
        number_of_guesses++;//tăng bộ tích lũy lên 1
    }
    //hiển thị chúc mừng 
    cout << "\nCorrect! " << endl;
    cout << "Random number      = " << random_num << endl;
    cout << "Your guess         = " << user_num   << endl;
    cout << "Number of guesses  = " << number_of_guesses << endl;
    return 0;
}