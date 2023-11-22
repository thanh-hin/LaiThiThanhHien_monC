#include <bits/stdc++.h>
using namespace std;
int main()
{
    const double PI = 3.14159;//khai báo hằng số
    //khai báo biến
    double radius;//bán kính
    char goAgain;//biến lựa chọn Y / N
    cout << "This program calculates the area of a circle.\n";
    cout << fixed << setprecision(2);//formatting
    do
    {
        // nhập ban kính 
        cout << "Enter the circle's radius: ";
        cin >> radius;
        //tính diện tích và hiển thị
        cout << "The area is " << (PI * radius * radius);
        cout << endl;
        // hỏi người dùng có muốn thực hiện lại phép tính
        cout << "Calculate another? (Y or N) ";
        cin >> goAgain;
        // xác thực đầu vào
        while (toupper(goAgain) != 'Y' && toupper(goAgain) != 'N')
        {
            //nhập lựa chọn
            cout << "Please enter Y or N: ";
            cin >> goAgain;
        }
    } while (toupper(goAgain) == 'Y');//nếu lựa chọn của người dùng là Y thì quay lại vòng lặp
    return 0;
}