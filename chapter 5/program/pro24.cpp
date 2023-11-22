#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;//khởi tạo file
    string filename;//chuỗi tên
    int number;//biến số
    // nhập tên file
    cout << "Enter the filename: ";
    cin >> filename;
    // mở file
    inputFile.open(filename);
    // mở file thành công thì xử lí file
    if (inputFile)
    {        
        //đọc số từ file và hiển thị nó
        while (inputFile >> number)
        {
            cout << number << endl;
        }
        // đóng file
        inputFile.close();
    }
    else
    {
        // báo lỗi
        cout << "Error opening the file.\n";
    }
    return 0;
}