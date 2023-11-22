#include <bits/stdc++.h>
using namespace std;

void showState(fstream &);//khai báo hàm

int main()
{
    //khai báo biến
    int num = 10;
    
    fstream testFile("stuff.dat", ios::out);//mở file để ghi
    if (testFile.fail())//kiểm tra lỗi mở file
    {
      cout << "ERROR: Cannot open the file.\n";//báo lỗi
      return 0;
    }
    //viết giá trị num vô file
    cout << "Writing the value " << num << " to the file.\n";
    testFile << num;
    showState(testFile);//gọi hàm showState 
    //đóng file
    testFile.close();
    //mở lại file
    testFile.open("stuff.dat", ios::in);
    if (testFile.fail())//kiểm tra lỗi mở file
    {
      cout << "ERROR: Cannot open the file.\n";//báo lỗi
      return 0;
    }
    //đọc giá trị từ file
    cout << "Reading from the file.\n";
    testFile >> num;
    cout << "The value " << num << " was read.\n";
    showState(testFile);//gọi hàm showState
    //không đọc được dữ liệu trong file nhưng bước thực hiện thao tác không hợp lệ
    cout << "Forcing a bad read operation.\n";
    testFile >> num;
    showState(testFile);//gọi hàm showState
    //dong file
    testFile.close();
    return 0;
}

//khoi tao ham showState gom fstream file
void showState(fstream &file)
{
    //hiển thị các giá trị
    cout << "File Status:\n";
    cout << "   eof bit: " << file.eof() << endl;
    cout << "   fail bit: " << file.fail() << endl;
    cout << "   bad bit: " << file.bad() << endl;
    cout << "   good bit: " << file.good() << endl;
    file.clear();
}