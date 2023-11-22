#include <iostream>
using namespace std;
int main()
{
    const int MONTHS = 12;//khai báo biến hằng
    int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//biến ngày trong tháng
    //hiển thị số ngày trong tháng
    for (int count = 0; count < MONTHS; count++)
    {
        cout << "Month " << (count + 1) << " has ";
        cout << days[count] << "days.\n";
    }
    return 0;
}