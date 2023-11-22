#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    float length1, width1,//chiều dài và chiều rộng hcn 1
          length2, width2,//chiều dài và chiều rộng hcn 2
          area1, area2;//diện tích hcn 1 và 2
    //nhập chiều dài và chiều rộng của 2 hcn
    cout << "What is the length of the first rectangle: ";
    cin >> length1;
    cout << "What is the width: ";
    cin >> width1;
    cout << "What is the length of the second rectangle: ";
    cin >> length2;
    cout << "The width: ";
    cin >> width2;
    // tính diện tích hình chữ nhật
    area1 = length1 * width1;
    area2 = length2 * width2;
    // so sánh 2 hình chữ nhật và hiển thị 
    if ( area1 > area2 )
        cout << "Area for rectangle 1 is greater." << endl;
    else if ( area1 < area2 )
        cout << "Area for rectangle 2 is greater." << endl;
    else if ( area1 == area2 )
        cout << "Area for both rectangles is the same." << endl;
    return 0;
}