#include <iostream>
#include "Die.h" 
using namespace std;

int main()
{
    //khai báo biến hằng
    const int DIE1_SIDES = 6;
    const int DIE2_SIDES = 12;
    const int MAX_ROLLS = 5;

    // Tạo hai đối tượng Die với số cạnh được chỉ định
    Die die1(DIE1_SIDES);
    Die die2(DIE2_SIDES);

    // Hiển thị trạng thái ban đầu của xúc xắc
    cout << "This simulates the rolling of a "
         << die1.getSides() << " sided die and a "
         << die2.getSides() << " sided die.\n";
    cout << "Initial value of the dice:\n";
    cout << die1.getValue() << " " << die2.getValue() << endl;

    // Đổ xúc xắc năm lần
    cout << "Rolling the dice " << MAX_ROLLS << " times.\n";
    for (int count = 0; count < MAX_ROLLS; count++)
    {
        //Tung xúc xắc
        die1.roll();
        die2.roll();

        //Hiển thị giá trị của xúc xắc
        cout << die1.getValue() << " " << die2.getValue() << endl;
    }

    return 0;
}
