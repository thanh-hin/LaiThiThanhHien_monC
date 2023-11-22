#include <bits/stdc++.h>
using namespace std;

int main()
{
    long offset;
    long numBytes;
    char ch;
    char again;
    //mo file chi doc
    fstream file("letters.txt", ios::in);
    //xac dinh so byte trong file
    file.seekg(0L, ios::end);
    numBytes = file.tellg();
    cout << "The file has " << numBytes << " bytes.\n";
    //quay lai phan dau cua file
    file.seekg(0L, ios::beg);
    //cho phep nguoi dung di chuyen trong file
    do
    {
        //hien thi vi tri doc hien tai
        cout << "Currently at position " << file.tellg() << endl;
        cout << "Enter an offset from the beginning of the file: ";
        cin >> offset;
        //di chuyen vi tri doc toi byte do, doc ky tu o do va hien thi no
        if (offset >= numBytes) //den cuoi tap tin
            cout << "Cannot read past the end of the file.\n";
        else//neu khong thi thuc hien cac cau lenh sau
        {
            file.seekg(offset, ios::beg);
            file.get(ch);
            cout << "Character read: " << ch << endl;
        }
        //hoi xem nguoi dung co muon thuc hien lai chuong tirnh lan nua khong
        cout << "Do it again? ";
        cin >> again;
    } while (again == 'Y' || again == 'y');//lap lai chuong trinh khi dieu kien while thoa man
    //dong file
    file.close();
    return 0;
}