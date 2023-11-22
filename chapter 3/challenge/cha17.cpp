#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo tạo bộ số ngẫu nhiên
    unsigned seed = time (0);
    srand(seed);
    //khai báo biến
    int num1, num2, answer;
    //tạo 2 số ngẫu nhiên
    num1 = rand();
    num2 = rand();
    cout <<"  "<<num1<<endl;
    cout <<"+"<<endl;
    cout <<"  "<<num2<<endl;
    //tính kết quả
    answer = num1 + num2;
    //chương trình dừng trước khi xuất hiện kết quả
    cout <<"Enter to see the answer:";
    cin.get();
    //hiển thị đáp án
    cout << num1 <<" + "<<num2<<" = "<<answer;
    return 0;
}