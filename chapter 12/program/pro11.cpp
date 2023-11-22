#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    fstream dataFile("sentence.txt", ios::out);  if (dataFile)//mo file chi ghi
    cout << "Type a sentence and be sure to end it with a ";
    cout << "period.\n";
    //nhap vao bien ch
    cin.get(ch);
    //khi ch khac ky tu '.' thi thuc hien cac cau lenh
    while (ch != '.')
    {
    //ghi ky tu nhap duoc vao file
    dataFile.put(ch);
    //nhap vao bien ch
    cin.get(ch);
    }
    dataFile.put(ch);
    //dong file
    dataFile.close();
    return 0;
}