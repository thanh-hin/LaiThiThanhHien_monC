#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    const double PRICE_A = 249.0,
                PRICE_B = 299.0;
                string partNum;
    //hiển thị các phần và nhập lựa chọn
    cout << "The stereo part numbers are:\n"
         << "Boom Box: part number S-29A \n"
         << "Shelf Model: part number S-29B \n"
         << "Enter the part number of the stereo you\n"
         << "wish to purchase: ";
    cin >> partNum;
    cout << fixed << showpoint << setprecision(2);//formatting
    // xác định và hiển thị giá chính xác
    if (partNum == "S-29A")
        cout << "The price is $" << PRICE_A << endl;
    else if (partNum == "S-29B")
        cout << "The price is $" << PRICE_B << endl;
    else
        cout << partNum << " is not a valid part number.\n";
    return 0;
}