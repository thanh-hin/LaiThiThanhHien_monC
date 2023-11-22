#include <bits/stdc++.h>
using namespace std;
void showValue(int [], int);//khai bao ham void showValue voi bien nguyen va mang nguyen
int main()
{
    const int ARRAY_SIZE = 8;//khai bao so luog phan tu trong mang
    int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};//khai bao mang number gom ARRAY_SIZE phan tu va co cac gia tri duoc gan lan luot
    showValue(numbers, ARRAY_SIZE);//goi ham showValue va truyen vao do mang numbers va hang ARRAT_SIZE
    return 0;
}
 void showValue(int nums[], int size)
 {//khoi tao ham showValue voi mang nguyen nums va bien nguyen size
    for (int index = 0; index < size; index++)
    cout << nums[index] << " ";//xuat ra phan tu thu size cua mang num
    cout << endl;
 }