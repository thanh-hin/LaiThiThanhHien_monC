#include <iostream>
using namespace std;
int main ()
{
    int n;//biến số 
    int sum = 0;//tổng tích lũy
    //xác thực đầu vào
    do
    {
        cout << "ERROR: a positive number must be chosen\n";
        cout << "Enter a positive number: ";
        cin >> n; // n < 0
    }while(n<0);
    //tính tổng
    for(int i=0 ; i<=n;i++)
    {
       sum+=i;//tích lũy chạy
    }
    //hiển thị kết quả
    cout << "Total = "<<sum<<endl;
    return 0;
}
