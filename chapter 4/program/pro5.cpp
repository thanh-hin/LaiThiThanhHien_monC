#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    int score1, score2, score3;//số điểm
    double average;//trung bình điểm
    //nhập 3 lần diểm 
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;
    // tính điểm trung bình điểm và ép kiểu
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);//formatting
    cout << "Your average is " << average << endl;//hiển thị điểm trung bình
    // khởi tạo lệnh điều kiện cho lệnh xuất
    if (average = 100) //lỗi gán sai dấu (==)
    cout << "Congratulations! That's a perfect score!\n";// luôn thực thi
    return 0;
}