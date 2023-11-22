#include <iostream>
using namespace std;
int main()
{
    double a[12];//khai bao mang a gom 10 phan tu
    for (int i = 0; i <= 11; ++i){//khoi tao vong lap de nhap vao gia tri cua tung phan tu
    cout << "Enter the rainfall of monthly " << i + 1 << ": ";
        cin >> a[i];//nhap vao gia tri cua phan tu i trong mang a
    }
    double min = a[0], max = a[0];//gan gia tri min va max cho phan tu 0 trong mang a
    double sum = 0;//khai bao bien thuc sum chua tong luong mua trong nam
    double avg;//khai bao bien thuc avg chua gia tri trung binh luong mua trong nam
    for (int i = 0; i <=11; ++i){//khoi tao vong lap de xet tung phan tu tim ra min, max va tinh ra sum 
        sum+= a[i];
        if (a[i] < min )//neu co gia tri khac nho hon min thi min bang gia tri phan tu do
            min = a[i];
        if (a[i] > max )//neu co gia tri khac nho hon min thi min bang gia tri phan tu do
            max = a[i]; 
    }
    avg = sum/12;//gan gia tri cho bien avg 
    //xuat ra man hinh
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}