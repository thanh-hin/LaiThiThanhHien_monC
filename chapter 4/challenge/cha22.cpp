#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    float temp;//khai báo biến nhiệt độ
    cout << "Enter temperature: "; 
    cin >> temp;//nhập nhiệt độ
    //hiển thị chất nào ở nhiệt độ sôi và đông đặc đó
    if (temp <= 32)//nhiệt độ đông đặc của water 
    {
        cout << "\nFreeze:\n" << "Water" << endl;
        if (temp <= -38)//add là nhiệt độ đông đặc của mercury
        {
            cout << "Mercury" << endl;
            if (temp <= -173)//add là nhiệt độ đông đặc của ethyl alcohol
            {
                cout << "Ethyl alcohol" << endl;
                if (temp <= -362)//add là nhiệt độ đông đặc của oxygen 
                    cout << "Oxygen" << endl;
            }
        }
    }
    if (temp >= -306)//nhiệt độ sôi của oxygen
    {
        cout << "Boil: \n" << "Oxygen." << endl;
        if (temp >= 172)//add là nhiệt độ sôi của ethyl alcohol
        {
            cout << "Ethyl alcohol." << endl;
            if (temp >= 212)//add là nhiệt độ sôi của water 
            {
                cout << "Water" << endl;
                if (temp >= 676)//add là nhiệt độ sôi của mercury
                    cout << "Mercury" << endl;
            }
        }
    }
    return 0;
}