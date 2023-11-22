#include <bits/stdc++.h>
using namespace std;
void doubleArray(int [], int);//khai bao ham void doubleArray voi bien nguyen va mang nguyen
void showValues(int [], int);//khai bao ham void showValue voi bien nguyen va mang nguyen

int main(){
    const int ARRAY_SIZE = 7;//khai bao hang thuc chua so luong phan tu cua mang 
    int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};//khai bao mang set gom ARRAY_SIZE phan tu va co cac gia tri duoc gan lan luot
    cout << "The array's values are:\n";
    showValues(set, ARRAY_SIZE);//goi ham showValues va truyen vao do mang set va hang nguyen ARRAY_SIZE
    doubleArray(set, ARRAY_SIZE);//goi ham doubleArray va truyen vao do mang set va hang nguyen ARRAY_SIZE
    cout << "After calling doubleArray the values are:\n";
    showValues(set, ARRAY_SIZE);//goi ham showValues va truyen vao do mang set va hang nguyen ARRAY_SIZE
    return 0;
}
void doubleArray(int nums[], int size)
{//khoi tao ham void doubleArray voi bien nguyen size va mang nguyen nums 
    for (int index = 0; index < size; index++)//khoi tao vong lap
    nums[index] *= 2;//phan tu thu index nhan cho 2 va gan vao gia tri phan tu thu index 
    }
void showValues(int nums[], int size){//khoi tao ham void showValue voi bien nguyen size va mang nguyen nums 
  for (int index = 0; index < size; index++)
   cout << nums[index] << " ";
   cout << endl;
}