#include <bits/stdc++.h>
using namespace std;
void showValues(int [], int);//khai bao ham void showValue voi bien nguyen va mang nguyen
int main()
{
    const int SIZE1 = 8;//khai bao hang thuc chua so luong phan tu cua mang 1
    const int SIZE2 = 5;//khai bao hang thuc chua so luong phan tu cua mang 1
    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};//khai bao mang nguyen set1 gom so luong phan tu bang SIZE1 va duoc gan cac gia tri lan luot theo thu tu
    int set2[SIZE2] = {2, 4, 6, 8, 10};//khai bao mang nguyen set2 gom so luong phan tu bang SIZE2 va duoc gan cac gia tri lan luot theo thu tu
    showValues(set1, SIZE1);//goi ham showValue truyen vao mang set1, hang SIZE1
    showValues(set2, SIZE2);//goi ham showValue truyen vao mang set2, hang SIZE2
    return 0;
}
void showValues(int nums[], int size)
{//khoi tao ham void showValue voi bien nguyen size va mang nguyen nums 
    for (int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}