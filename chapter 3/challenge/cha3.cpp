#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    double test1, test2, test3, test4, test5;// khai báo biến điểm 5 lần kiểm tra
    double avr;//khai báo biến trung bình điểm
    cout <<"Enter the scores of the 5 test in order: \n";
    cin >> test1 >>test2 >>test3 >>test4 >>test5;//nhập điểm 5 bài kiểm tra
    avr = (test1 + test2 + test3 + test4 + test5)/5;//tính điểm trung bình
    cout <<"The average test score: "<<setprecision(1)<<fixed<<avr<<endl;//hiển thị điểm trung bình
    return 0;
} 