#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int num =4;//khai báo biến
    //hiển thị giá trị của num
    cout << "The variable num is " << num << endl;
    cout << "I will now increment num.\n\n";
    // dùng hậu tố ++ để tăng giá trị num
    num++;
    cout << "Now the variable num is " << num << endl;
    cout << "I will increment num again.\n\n";
    // dùng tiền tố ++ tăng giá trị num
    ++num;
    cout << "Now the variable num is " << num << endl;
    cout << "I will now decrement num.\n\n";
    // dùng hậu tố -- giảm giá trị num
    num--;
    cout << "Now the variable num is " << num << endl;
    cout << "I will decrement num again.\n\n";
    // dùng tiền tố -- để giảm giá trị num
    --num;
    cout << "Now the variable num is " << num << endl;
    return 0;
}