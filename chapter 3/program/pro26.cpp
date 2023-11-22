#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()//chương trình chính
{
    // khai báo 
    const int MIN_VALUE = 1; //Giá trị tối thiểu
    const int MAX_VALUE = 6; //Giá trị tối đa
    int die1; 
    int die2; 
    // Lấy thời gian của hệ thống
    unsigned seed = time(0);
    // trình tạo số ngẫu nhiên.
    srand(seed);
    cout << "Rolling the dice \n";
    //thực hiện tính 
    die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    //hiển thị kết quả
    cout << die1 << endl;
    cout << die2 << endl;
    return 0;
}