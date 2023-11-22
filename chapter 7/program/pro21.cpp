#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int NUM_DIVS = 3;//khai bao hang nguyen chua so hang va so cot
    const int NUM_QTRS = 4;
    double sales[NUM_DIVS][NUM_QTRS];//khai bao mang thuc gom 3 hang va 4 cot
    double totalSales = 0;//khai bao va gan gai tri cho bien thuc totalsales
    int div, qtr;//khai bao bien nguyen div, qtr
    cout << "This program will calculate the total sales of\n";
    cout << "all the company's divisions.\n";
    cout << "Enter the following sales information:\n\n";
    for (div = 0; div < NUM_DIVS; div++){//khoi tao vong lap thu nhat de chay so hang
    for (qtr = 0; qtr < NUM_QTRS; qtr++){//khoi tao vong lap thu hai de chay so cot
        cout << "Division " << (div + 1);//xuat ra man hinh yeu cau nhap vao phan tu o hang div + 1 va o cot qtr + 1
        cout << ", Quarter " << (qtr + 1) << ": $";
        cin >> sales[div][qtr];//nhap vao gai tri phan tu
        }
    cout << endl; // Print blank line.
    }
    //khoi tao hai vong lap long nhau de cong roi gan vao bien totalSales
    for (div = 0; div < NUM_DIVS; div++){
    for (qtr = 0; qtr < NUM_QTRS; qtr++)
        totalSales += sales[div][qtr];
    }
    cout << fixed << showpoint << setprecision(2);//xuat ra man hinh mac dinh hai so thap phan sau dau phay
    cout << "The total sales for the company are: $";
    cout << totalSales << endl;//xuat ra man hinh gia tri cua bien totalSales
    return 0;
}
