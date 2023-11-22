#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khai báo 
    int numElements; // Để giữ số phần tử cần phân bổ
    int *values; // Một con trỏ tới mảng
    int count; // Bộ đếm vòng lặp
    // nhập kích thước mảng
    cout << "\nEnter an array size: " << endl;
    cin >> numElements;
    //trả về null nếu num bằng 0 hoặc âm
    if (numElements <= 0)
        return NULL;
    // phân bổ mảng
    values = new int[numElements];
    //Lấy giá trị cho từng phần tử
    cout << "Enter the value of the elements below.\n";
    //tạo vòng lặp nhập từng giá trị
    for (count = 0; count < numElements; count++)
    {
        //nhập giá trị
        cout << "Value #" << (count + 1) << ": ";
        cin >> values[count];
    }
    //Trả về một con trỏ tới mảng
    cout << "The array holds the numbers you entered: \n";
    for (count = 0; count < numElements; count++)
    {
        cout << *values << " ";
        values++;//tăng biến
    }
    //giải phóng bộ nhớ được cấp phát động
    delete [] values;
    values = 0; //làm cho các phần tử trở thành NULL
    return 0;
}