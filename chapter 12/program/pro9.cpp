#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;//khai bao bien xau ky tu input
    fstream dataFile("names2.txt", ios::in);//mo file chi doc
    if (dataFile)//neu mo duoc file thi thuc hien cac cau lenh tiep theo
    {
        //doc du lieu trong file gan vao bien input, ngung doc khi gap ky tu '$'
        getline(dataFile, input, '$');
        //khi thao tac doc hoan thanh thuc hien cac cau lenh
        while (dataFile)
        {
        //xuat ra man hinh gia tri inout
        cout << input << endl;
        //doc mot du lieu trong file gan vao bien input, ngung doc khi gap ky tu '$'
        getline(dataFile, input, '$');
        }
            dataFile.close();//dong file
    }
    else//neu file mo khong thanh cong thi thuc hien cac cau lenh duoi day
    {
        cout << "ERROR: Cannot open file.\n";
    }
    return 0;
}
