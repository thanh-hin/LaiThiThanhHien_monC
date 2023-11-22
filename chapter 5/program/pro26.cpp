#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //khai báo biến
    int dvdCount = 1;
    int numDVDs; //số đĩa được thuê
    double total = 0.0; // biến tích lũy
    char current;
    //nhập số đĩa
    cout << "How many DVDs are being rented? ";
    cin >> numDVDs;
    // xác định giá
    do
    {
        if ((dvdCount % 3) == 0)
        {
            cout << "DVD #" << dvdCount << " is free!\n";
            continue; // bắt đầu vòng lặp tiếp theo
        }
        cout << "Is DVD #" << dvdCount;
        cout << " a current release? (Y/N) ";
        cin >> current;
        if (current == 'Y' || current == 'y')
            total += 3.50;
        else
            total += 2.50;
    } while (dvdCount++ < numDVDs);
    // hiển thị tổng tiền
    cout << fixed << showpoint << setprecision(2);//formatting
    cout << "The total is $" << total << endl;
    return 0;
}