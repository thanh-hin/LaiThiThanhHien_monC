#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến
    int totalSeconds = 125;
    int minutes, seconds;
    // tính số phút
    minutes = totalSeconds / 60;
    // tính số giây còn lại
    seconds = totalSeconds % 60;
    // hiển thị kết quả
    cout << totalSeconds << " seconds is equivalent to:\n";
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
    return 0;
}