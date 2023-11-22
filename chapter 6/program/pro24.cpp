#include <bits/stdc++.h>
using namespace std;

void displayStars(int = 10, int = 1);//khai báo hàm với đối số mặc định

int main()//hàm chính
{
    displayStars();// Sử dụng giá trị mặc định cho cột và hàng
    cout << endl;//xuống hàng
    displayStars(5);//Sử dụng giá trị mặc định cho hàng
    cout << endl;//xuống hàng
    displayStars(7, 3); // Sử dụng 7 cho cột và 3 cho hàng
    return 0;
}

void displayStars(int cols, int rows)//định nghĩa hàm displayStars
{
    // vòng lặp lòng nhau
    //for ngoài điều khiển các hàng
    //for trong điều khiển các cột
    for (int down = 0; down < rows; down++)
    {
        for (int across = 0; across < cols; across++)
            cout << "*";
        cout << endl;
    }
}