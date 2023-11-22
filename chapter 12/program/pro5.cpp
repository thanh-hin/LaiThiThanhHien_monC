#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
bool openFileIn(fstream &, string);
void showContents(fstream &);

int main()
{
    fstream dataFile;
    //khởi tạo câu điều kiện if, nếu giá trị của hàm openFileIn khi truyền vào dataFile và demonfile.txt là đúng thì thực h₫thi lệnh xuất
    if (openFileIn(dataFile, "demofile.txt"))//kiểm tra lỗi mở file
    {
      cout << "File opened successfully.\n";
      cout << "Now reading data from the file.\n\n";
      showContents(dataFile);//goi ham showCOntents 
      dataFile.close();//đóng file
      cout << "\nDone.\n";
  }
    else//báo lỗi không mở được file
    cout << "File open error!" << endl; 
    return 0;
}

//hàm kiểm tra mở file
bool openFIleIn(fstream &file, string name)
{
    file.open(name, ios::in);//mở file
    if(file.fail())//nếu mở không thành công thì trả về false
      return false;
    else//mở thành công thì trả về true
      return true;
}

//hàm hiển thị nội dung
void showContents(fstream &file)
{
    //khai báo chuỗi
    string line;
    while (file >> line)
    {
      cout << line << endl;
    }
}