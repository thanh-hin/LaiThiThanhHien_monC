#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    int modelNum;//khai báo biến
    // nhập lựa chọn model 
    cout << "Our TVs come in three models:\n";
    cout << "The 100, 200, and 300. Which do you want? ";
    cin >> modelNum;
    // Hiển thị các tính năng của mô hình
    cout << "That model has the following features:\n";
    switch (modelNum)
    {
        case 300: cout << "\tPicture-in-a-picture.\n";
        case 200: cout << "\tStereo sound.\n";
        case 100: cout << "\tRemote control.\n";
                  break;
        default: cout << "You can only choose the 100,";
                 cout << "200, or 300.\n";
    }
    return 0;
}