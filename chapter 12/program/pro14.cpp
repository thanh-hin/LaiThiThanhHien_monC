#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int SIZE = 10;
    fstream file;
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //mo file de xuat o dang nhi phan
    file.open("number.dat", ios::out | ios::binary);
    cout << "Writing the data to the file.\n";
    //viet noi dung cua mang vao file
    file.write(reinterpret_cast<char *>(numbers), sizeof(numbers));
    //dong file
    file.close();
    //mo file de nhap duoi dang nhi phan
    file.open("numbers.dat", ios::in | ios::binary);
    //doc noi dung cua file vao mang
    cout << "Now reading the data back into memory.\n";
    file.read(reinterpret_cast<char *>(numbers), sizeof(numbers));
    //xuat ra noi dung cua mang
    for (int count = 0; count < SIZE; count++)
        cout << numbers[count] << " ";
        cout << endl;
    //dong file
    file.close();
    return 0;
}