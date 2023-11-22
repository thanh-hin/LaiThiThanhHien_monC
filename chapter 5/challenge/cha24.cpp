#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ifstream inputFile;
    //khai báo biến
    double sum = 0,
           total = 0,
           average,
           number;

    // mở file
    inputFile.open("Random.txt");
    if (inputFile.fail())//kiểm tra có mở được file hay không
    {
        cout << "Error opening the file." << endl;//báo lỗi
    }
    else 
    {
        // mở file thành công
        //tệp hợp lệ
        while(inputFile >> number)
        {
            sum += number;//bộ tích lũy sum chạy
            total++;//total tăng 1
        }
        average = sum / total;//tính giá trị trung bình
        //hiển thị dữ liệu
        cout << "Sum  : " << sum << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl; 

    }
    // đóng file
    inputFile.close();
    cout << "File closed. Program Ended." << endl;
    return 0;
}