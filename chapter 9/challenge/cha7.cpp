#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void arrSelectionSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

int main()//hàm chính
{
    const int NUM_DONATIONS = 15; //khai báo biến hằng
    //khai báo mảng cho trước
    int donations[NUM_DONATIONS] = { 5, 100, 5, 25, 10,
                                     5, 25, 5, 5, 100, 
                                     10, 15, 10, 5, 10 };
    int *arrPtr[NUM_DONATIONS] = { nullptr, nullptr, nullptr, nullptr, nullptr,
                                   nullptr, nullptr, nullptr, nullptr, nullptr,
                                   nullptr, nullptr, nullptr, nullptr, nullptr };
    //khởi tạo vòng lặp for
    for (int count = 0; count < NUM_DONATIONS; count++)
        arrPtr[count] = &donations[count];
    arrSelectionSort(arrPtr, NUM_DONATIONS);//gọi hàm arSelectionSort
    cout << "The donations, sorted in decending order are: \n";
    showArrPtr(arrPtr, NUM_DONATIONS);//gọi hàm showArrPtr
    cout << "The donations, in their original order are: \n";
    showArray(donations, NUM_DONATIONS);//gọi hàm showArray
    return 0;
}

//hàm sắp xếp 
void arrSelectionSorts(int *arr, int size)//định nghĩa hàm
{
    //khai báo biến
    int startScan, minIndex;
    int minElem;
    //khởi tạo vòng lặp for
    for ( startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;//gán giá trị
        minElem = arr[startScan];//gán giá trị
        //khởi tạo vòng lặp for
        for (int index = startScan + 1; index < size; index++)
        {
            if (*(arr + index ) < minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }  
        swap(*(arr + minIndex), *(arr + startScan));
    }
}

//hàm hiển thị nội dung mảng
void showArray(const int arr[], int size)
{
    //khởi tạo for cho chạy đến từng index của mảng
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

//hàm hiển thị trỏ đến vị trí trong mảng
void showArrPtr(int *arr[], int size)
{
    //khởi tạo vòng lặp for
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}