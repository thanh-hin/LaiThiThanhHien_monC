#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

int main()//hàm chính
{
    const int NUM_DONATIONS = 15; // Số lượng quyên góp
    // Một mảng chứa số tiền quyên góp
    int donations[NUM_DONATIONS] = { 5, 100, 5, 25, 10,
                                    5, 25, 5, 5, 100,
                                    10, 15, 10, 5, 10};
    // Một mảng các con trỏ tới int
    int *arrPtr[NUM_DONATIONS] = { nullptr, nullptr, nullptr, nullptr, nullptr,
                                   nullptr, nullptr, nullptr, nullptr, nullptr,
                                   nullptr, nullptr, nullptr, nullptr, nullptr };
    // Mỗi phần tử của ArrayPtr là một con trỏ tới int. Làm cho mỗi phần tử trỏ tới một phần tử trong mảng quyên góp
    for (int count = 0; count < NUM_DONATIONS; count++)
        arrPtr[count] = &donations[count];
    // Sắp xếp các phần tử của mảng con trỏ.
    arrSelectSort(arrPtr, NUM_DONATIONS);
    // Hiển thị số tiền quyên góp bằng cách sử dụng mảng con trỏ. Điều này sẽ hiển thị chúng theo thứ tự được sắp xếp
    cout << "The donations, sorted in ascending order are: \n";
    showArrPtr(arrPtr, NUM_DONATIONS);
    // Hiển thị các khoản đóng góp theo thứ tự ban đầu của chúng.
    cout << "The donations, in their original order are: \n";
    showArray(donations, NUM_DONATIONS);
    return 0;
}

//hàm săp sxeeps các phần tử trong mảng
void arrSelectSort(int *arr[], int size)
{
    int startScan, minIndex;//khai báo
    int *minElem;
    //sắp xếp mảng
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            if (*(arr[index]) < *minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

//hàm hiển thị mảng ban đầu
void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

//hàm hiển thị sau khi sắp xếp
void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}