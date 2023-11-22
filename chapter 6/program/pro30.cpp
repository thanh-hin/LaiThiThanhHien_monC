#include <bits/stdc++.h>
using namespace std;

void showFees(double, int);//khai báo hàm

int main()//hàm chính
{
    // Hằng số cho tỷ lệ thành viên
    const double ADULT = 40.0;
    const double SENIOR = 30.0;
    const double CHILD = 20.0;
    //hiển thị tiền phí người lớn
    cout << "Testing an adult membership...\n"
        << "Calling the showFees function with arguments "
        << ADULT << " and 10.\n";
    showFees(ADULT, 10);//gọi hàm showFees với thành viên người lớn
    // hiển thị tiền phí người cao tuổi
    cout << "\nTesting a senior citizen membership...\n"
        << "Calling the showFees function with arguments "
        << SENIOR << " and 10.\n";
    showFees(SENIOR, 10);//gọi biến showFees cho biến người cao tuổi
    // hiển thị tiền phí trẻ em
    cout << "\nTesting a child membership...\n"
        << "\nCalling the showFees function with arguments "
        << CHILD << " and 10.\n";
    showFees(CHILD, 10);//gọi hàm showFees cho biến trẻ em
    return 0;
}

//hàm hiển thị và tính phí thành viên
void showFees(double memberRate, int months)
{
    cout << "The total charges are $"
        << (memberRate * months) << endl;
}