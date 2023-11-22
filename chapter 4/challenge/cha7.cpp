#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    double second, minute, hour, day;//khai báo biến
    //nhập số giây
    cout << "Enter the seconds: ";
    cin >> second;
    //quy đổi số giây thành ngày giờ phút tương ứng
    if (second >= 60 && second <3600)
    {
        minute = second / 60;//tính phút
        cout << second <<" s = "<< minute << " minutes" << endl;
    }
    else if (second >= 3600 && second < 86400)
    {
        hour = second / 3600;//tính giờ
        cout << second << " s = " << hour << " hours" << endl;
    }
    else if (second >= 86400)
    {
        day = second / 86400;//tính ngày
        cout << second <<" s = "<< day << " day"<<endl;
    }
    return 0;
}