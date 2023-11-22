#include <bits/stdc++.h>
using namespace std;
const int COLS = 4;//khai bao hang nguyen chua so cot
const int TBL1_ROWS = 3;//khai bao hang nguyen chua so hang cua bang 1
const int TBL2_ROWS = 4;//khai bao hang nguyen chua so hang cua bang 2
void showArray(const int [][COLS], int);

int main(){
    int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};//khai bao bang 1 gom 3 hang va 4 cot voi cac phan tu duoc gan gia tri lan luot
    int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40}, {50, 60, 70, 80},{90, 100, 110, 120},{130, 140, 150, 160}};//khai bao bang 2 gom 4 hang va 4 cot voi cac phan tu duoc gan gia tri lan luot
    cout << "The contents of table1 are:\n";
    showArray(table1, TBL1_ROWS);//goi ham showArray va truyen vao do mang table1 va gia tri cua TB1_ROWS
    cout << "The contents of table2 are:\n";
    showArray(table2, TBL2_ROWS);//goi ham showArray va truyen vao do mang table2 va gia tri cua TB2_ROWS
    return 0;
}
void showArray(const int numbers[][COLS], int rows)
{   //khoi tao ham showValue voi mang hai chieu numbers va bien nguyen rows
    for (int x = 0; x < rows; x++){
    for (int y = 0; y < COLS; y++){
        cout << setw(4) << numbers[x][y] << " ";//canh le phai bon khoang trang xuat ra phan tu o hang x va cot y
    }
    cout << endl;
    }
}