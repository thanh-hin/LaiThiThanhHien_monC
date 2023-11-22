#include <bits/stdc++.h>
using namespace std;
int main()
{
    const double APRICE = 249.0; // giá phần A
    const double BPRICE = 299.0; // giá phần B
    string partNum;// chuỗi số phần
    //nhập số của phần 
    cout << "The stereo part numbers are:\n";
    cout << "\tBoom Box, part number S147-29A\n";
    cout << "\tShelf Model, part number S147-29B\n";
    cout << "Enter the part number of the stereo you\n";
    cout << "wish to purchase: ";
    cin >> partNum;
    cout << fixed << showpoint << setprecision(2);//formatting
    // xác định giá tiền của lựa chọn người dùng
    if (partNum == "S147-29A")
        cout << "The price is $" << APRICE << endl;
    else if (partNum == "S147-29B")
        cout << "The price is $" << BPRICE << endl;
    else
        cout << partNum << " is not a valid part number.\n";//giá trị nhập ko hợp lệ
    return 0;
}