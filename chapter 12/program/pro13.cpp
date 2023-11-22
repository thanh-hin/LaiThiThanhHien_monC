#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int SIZE = 4;
    char data[SIZE] = { 'A', 'B', 'C', 'D'};
    fstream file;
    file.open("test.dat", ios::out | ios::binary);//mo file de ghi duoi dang nhi phan
    cout << "Writing the characters to the file.\n";
    //ghi noi dung cua mang vao tap tin
    file.write(data, sizeof(data));
    //dong file
    file.close();
    //mo file de nhap du lieu duoi dang nhi phan
    file.open("test.dat", ios::in | ios::binary);
    //doc noi dung cua file vao mang
    cout << "Now reading the data back into memory.\n";
    file.read(data, sizeof(data));
    //xuat ra man hinh noi dung mang
    for (int count = 0; count < SIZE; count++)
        cout << data[count] << " ";
        cout << endl;
    //dong file
    file.close();
    return 0;
}