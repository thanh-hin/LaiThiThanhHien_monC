#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    const double BAGOFCOOKIE = 30,
                 SERVINGSINBAG = 10,
                 ONESERVING = 300;
    double serveing = BAGOFCOOKIE / SERVINGSINBAG ,//tính 1 khẩu phần có bao nhiêu cái bánh
            cookieAte,//số bánh đã ăn
            total, //tổng calo
            calories = ONESERVING / serveing;//calo mỗi bánh
    //hỏi người dùng đã ăn bao nhiêu cái bánh
    cout <<"How many cookies you actually ate? ";
    cin >> cookieAte;//nhập số bánh đã ăn
    total = cookieAte * calories;//tính tổng calo đã tiêu thụ
    cout <<"Total calories were consumed : "<<total<<endl;//hiển thị kết quả
    return 0;
}