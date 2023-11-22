#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    float weight,//cân nặng
          height,//chiều cao
          bmi;// chỉ số BMI
    //nhập cân nặng (pound) và chiều cao (inch)
    cout << "Enter your weight and height: "<<endl;
    cin >> weight >> height;
    //tính chỉ số BMI
    bmi = (weight *703)/pow(2,height);
    cout << fixed << showpoint << setprecision(1);//formatting
    //xác định chỉ số BMI của người dùng như thế nào
    if ( bmi >= 18.5 && bmi <= 25)
        cout << "weight optimal."<<endl;
    else if ( bmi > 0 && bmi < 18.5)
        cout <<"weght underweight."<<endl;
    else if ( bmi > 25)
        cout <<"weigth overweight."<<endl;
    else   
        cout <<"illegal.";
    return 0;
}