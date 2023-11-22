#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
int doSomething(int *x, int *y)//định nghĩa hàm
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}


int main()//hàm chính
{
    
    int x = 0;//khai báo biến x
    int y = 0;//khai báo biến y
    //nhập 2 số
    cout << "Enter in two numbers, and we will process it. Press enter after each number: ";
    cin >> x;
    cin >> y;
    //hiển thị giá trị 2 số x,y
    cout << "Your new number is: " << doSomething(&x, &y) << endl;
    return 0;
}