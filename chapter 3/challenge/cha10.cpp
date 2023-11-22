#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    const float INSURE_PERCENTAGE = 0.80;
    float replacement_cost,
          min_amount_insurance;
    cout << "Enter the replacement cost of your "  << endl;
    cout << "home or building     : $";
    cin >> replacement_cost;
    // tính số bảo hiểm tối thiểu
    min_amount_insurance = replacement_cost * INSURE_PERCENTAGE;
    // hiển thị số tiền tối thiểu để mua tài sản
    cout << setprecision(2) << fixed;//formatting
    cout << "The minimum amount of insurance " << endl;
    cout << "to buy at %80 is        : $";
    cout << min_amount_insurance << endl;
    return 0;
}