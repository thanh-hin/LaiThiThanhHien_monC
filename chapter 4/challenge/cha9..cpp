#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //hằng số các tiền xu 
    const float ONE_DOLLAR = 1.00,
                PENNY      = 0.01,
                NICKEL     = 0.05,
                DIME       = 0.10,
                QUARTER    = 0.25;
    // khai báo các biến tiền xu
    float pennies,
          nickels,
          dimes,
          quarters,
          total_coins;//tổng tiền
    //nhập số tiền của các loại tiền xu 
    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "Nickels? ";
    cin >> nickels;
    cout << "Dimes? ";
    cin >> dimes;
    cout << "Quarters? ";
    cin >> quarters;
    //tính tổng tiền
    total_coins += ((pennies *= PENNY) + (nickels *= NICKEL) + (dimes *= DIME) + (quarters *= QUARTER));
    //hiển thị tổng số tiền
    if (total_coins == ONE_DOLLAR)//trường hợp tổng tiền = 1 đô
        cout << '$' << total_coins << " equal to $1." << endl;
    else if (total_coins < ONE_DOLLAR)//trường hợp tổng tiền bé hơn 1 đô
        cout << '$' << total_coins << " is less than $1. Re-run program and Try again.\n";
    else if (total_coins > ONE_DOLLAR)//trường hợp tổng tiền lớn hơn 1 dô
        cout << '$' << total_coins << " greater than $1.  Re-run program and Try again.\n";
    return 0;
}