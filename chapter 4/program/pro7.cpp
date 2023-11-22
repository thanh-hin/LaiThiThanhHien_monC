#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    const int HIGH_SCORE = 95;//khai báo biến hằng
    int score1, score2, score3; // khai báo biến của 3 lần điểm
    double average;//khai báo biến giá trị trung bình điểm
    // nhập 3 lần điểm theo thứ tự
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;
    // tính điểm trung bình và ép kiểu
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);//formatting
    cout << "Your average is " << average << endl;//iển thị điểm trung bình
    // lỗi thiếu dấu ngoặc nhọn khi dùng lệnh if có nhiều lệnh con
    if (average > HIGH_SCORE)
        cout << "Congratulations!\n";
        cout << "That's a high score.\n";//luôn thực thi
        cout << "You deserve a pat on the back!\n";//luôn thực thi
    return 0;
}