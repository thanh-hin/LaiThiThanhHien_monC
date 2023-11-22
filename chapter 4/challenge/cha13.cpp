#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    int book, point; //khai báo biến
    //nhập số sách 
    cout <<"Enter the number of books purchased this month: ";
    cin >> book;
    //xác định điểm 
    if(book >= 4)
        point = 60;
    else if (book == 3)
        point = 30;
    else if (book == 2)
        point = 15;
    else if (book == 1)
        point = 5;
    else //trường hợp ko có sách nào
        point = 0;
    cout << "Point : " << point << endl;
    return 0;
}