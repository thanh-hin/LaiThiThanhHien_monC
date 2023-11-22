#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo biến
    // giá các phần
    const double A_PRICE = 249.0,
                 B_PRICE = 299.0;
    const int PART_LENGTH = 8;
    char partNum[PART_LENGTH];// Mảng ký tự cho số phần.
    // Hướng dẫn người dùng nhập số phần
    cout << "The stereo part numbers are:\n"
         << "\tBoom Box, part number S147-29A\n"
         << "\tShelf Model, part number S147-29B\n"
         << "Enter the part number of the stereo you\n"
         << "wish to purchase: ";
    // Đọc một phần số tối đa 8 ký tự
    cin >> partNum;
    //Xác định những gì người dùng đã nhập bằng strcmp và in giá của nó0
    cout << showpoint << fixed << setprecision(2);
    if (strcmp(partNum, "S147-29A") == 0)
        cout << "The price is $" << A_PRICE << endl;
    else if (strcmp(partNum, "S147-29B") == 0)
        cout << "The price is $" << B_PRICE << endl;
    else
        cout << partNum << " is not a valid part number.\n";
    return 0;
}