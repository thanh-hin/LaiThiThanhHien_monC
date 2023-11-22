#include <iostream>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    int books;
    int months;
    double perMonth;
    cout << "How many books do you plan to read? ";
    cin >> books;//nhập số lượng sách
    cout << "How many months will it take you to read them? ";
    cin >> months;//nhập số tháng sẽ hoàn thành 
    perMonth = static_cast<double>(books) / months;//tính số sách đọc được mỗi tháng
    cout << "That is " << perMonth << " books per month.\n";//hiển thị kết quả
    return 0;
}