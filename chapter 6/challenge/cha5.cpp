#include <bits/stdc++.h>
using namespace std;

//khai báo hằng số
const double g = 9.8; 

//khai báo hàm
double fallingDistance(double);

int main()//hàm chính
{
	double d,//khoảng cách tính bằng mét
            t;//khoảng thời gian
    //xác định trong từng khoảng thời gian thì khoảng cách là bao nhiêu
	for (int i = 0; i < 10; i++)
    {
		t = i + 1;
        d = fallingDistance(t);//gán biến d = hàm fallingDistance
        cout << t << " seconds =  "
             << d << " meters"
             << endl;
    }
  	return 0;
}

//hàm nhận thời gian rơi của vật
double fallingDistance(double falling_time)//định nghĩa hàm
{
    return (0.5) * g * pow(falling_time, 2);//trả về khoảng cách 
}