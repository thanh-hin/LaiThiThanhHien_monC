#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    double cookie = 48,//số bánh quy theo công thức
           cupSugar = 1.5,//số cốc đường theo công thức
           cupButter = 1,//số cốc bơ theo công thức
           cupFlour = 2.75,//số cốc bột theo công thức
           amountCookie,//số bánh quy muốn làm
           actualSugar,//số lượng đường cần dùng
           actualButter, //số lượng bơ cần dùng
           actualFlour;//số lượng bọt cần dùng
    cout <<"how many cookies you want to make: ";
    cin >>amountCookie;//nhập số lượng bánh muốn làm
    actualSugar = cupSugar / cookie * amountCookie;//tính lượng đường cần dùng
    actualButter = cupButter / cookie * amountCookie;//tính lượng bơ cần dùng
    actualFlour = cupFlour / cookie * amountCookie;//tính lượng bột cần dùng
    //hiển thị kết quả
    cout <<"The number of cups of sugar needed to make the requied number of cookies: "<<actualSugar<<endl;
    cout <<"The number of cups of butter needed to make the requied number of cookies: "<<actualButter<<endl;
    cout <<"The number of cups of flour needed to make the requied number of cookies: "<<actualFlour<<endl;
    return 0;
}