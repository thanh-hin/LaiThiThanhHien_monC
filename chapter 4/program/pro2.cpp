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
    // hiển thị câu chúc mừng nếu điểm trung bình > 95
    if (average > HIGH_SCORE)
    cout << "Congratulations! That's a high score!\n";
    return 0;
}