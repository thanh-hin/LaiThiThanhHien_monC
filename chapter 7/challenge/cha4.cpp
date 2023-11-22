#include <iostream>
using namespace std;
int main()
{
 int m;//khai bao bien nguyen m chua so luong phan tu trong mang a
 cout << "Enter the number of arrays: ";
 cin >> m;//nhap vao m
 int a[m];//khai bao mang a gom m phan tu
 int n;//khai bao bien nguyen n
    for (int i = 0; i <m; ++i){//khoi tao vong lap de nhap vao gia tri cua tung phan tu trong mang a
        cin >> a[i];
    }
    cout << "Enter the number of n: ";
    cin >> n;//nhap vao gia tri cua n
    for (int i = 0; i < m; i++){//khoi tao vong lap de xuat ra cac phan tu lon hon n
        if(a[i]>n){//neu phan tu thu i trong mang a lon hon n thi thuc hien lenh
            if(i== m-1)//neu beiu thuc trong ngoac thoa man thi thuc hien lenh
               cout << a[i];
            else//neu beiu thuc trong ngoac cua if thoa man thi thuc hien lenh
               cout << a[i] << ", ";
        }
    }
 return 0;
}