#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    //khai báo biến
    int checking;
    unsigned int miles;
    long days;
    //gắn giá trị cho biến
    checking = -20;
    miles = 4276;
    days = 189000;
    //hiển thị ra màn hình các giá trị của biến 
    cout << "We have made a long journey of " << miles;
    cout << " miles.\n";
    cout << "Our checking account balance is " << checking;
    cout << "\nAbout " << days << " days ago Columbus ";
    cout << "stood on this spot.\n";
    return 0;

}