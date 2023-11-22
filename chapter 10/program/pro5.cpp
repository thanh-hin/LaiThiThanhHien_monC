#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    //khai báo biến
    const int SIZE = 80; //kích thước mảng
    char line[SIZE];// khai báo mảng
    int count = 0;// bộ đếm
    //nhập vào ă dòng input
    cout << "Enter a sentence of no more than "
         << (SIZE - 1) << " characters:\n";
    cin.getline(line, SIZE);
    // Hiển thị đầu vào một ký tự tại một thời điểm
    cout << "The sentence you entered is:\n";
    while (line[count] != '\0')//điều kiện mỗi index trong mảng phải khác giá trị null
    {
        //với 1 giá trị của mảng được xuất ra, tăng biến đếm lên 1 đơn vị
        cout << line[count];
        count++;
    }
    return 0;
}