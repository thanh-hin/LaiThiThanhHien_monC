#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo biến
    const int SIZE = 20; // kích thước mảng
    char input[SIZE];    // Để giữ đầu vào của người dùng
    int total = 0;    // Tích lũy
    int count = 0;    // bộ đếm
    double average;    // giá trị trung bình
    // nhập số đầu tiên
    cout << "This program will average a series of numbers.\n";
    cout << "Enter the first number or Q to quit: ";
    cin.getline(input, SIZE);
    // Xử lý số và các số tiếp theo
    while (tolower(input[0]) != 'q')
    {
        total += atoi(input);//tích lũy đang chạy
        count++;// biến count tăng 1
        // nhập số tiếp theo
        cout << "Enter the next number or Q to quit: ";
        cin.getline(input, SIZE);
    }
    // If any numbers were entered, display their average.
    if (count != 0)//nếu biến count khác 0 thì xuất giá trị trung bình của nó
    {
        average = static_cast<double>(total) / count;
        cout << "Average: " << average << endl;
    }
    return 0;
}