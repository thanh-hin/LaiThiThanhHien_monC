#include <bits/stdc++.h>
using namespace std;

int main()
{
    //khai bao bien ky tu ch
    char ch;
    fstream file("letters.txt", ios::in);
    //Di chuyển đến byte 5 từ đầu file (byte thứ 6) và đọc ký tự ở đó.
    file.seekg(5L, ios::beg);
    file.get(ch);
    //xuat ra gia tri bien ch
    cout << "Byte 5 from beginning: " << ch << endl;
    //Di chuyển đến byte thứ 10 tính từ cuối file và đọc ký tự ở đó.
    file.seekg(-10L, ios::end);
    file.get(ch);
    //xuat ra gia tri bien ch
    cout << "10th byte from end: " << ch << endl;
    // Di chuyển đến byte 3 từ vị trí hiện tại (byte thứ 4) và đọc ký tự ở đó
    file.seekg(3L, ios::cur);
    file.get(ch);
    //xuat ra gia tri bien ch
    cout << "Byte 3 from current: " << ch << endl;
    file.close();
    return 0;
}