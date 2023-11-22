#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
void arrSelectionSort(int *, int);
void showArray(const int [], int);
// void showArrPtr(int *[], int);
void showArrPtrs(int *, int);

int main()//hàm chính
{
    //khai báo biến
    int number_of_donations;//Số lượng khoản quyên góp
    //nhập số lượng quyên góp
    cout << "Enter number of donations: ";
    cin >> number_of_donations;
    int donations[number_of_donations];//khai báo mảng
    //nhập số tiền quyên góp
    cout << "Enter donation amounts: " << endl;
    //khởi tạo vòng for để nhập số tiền quyên góp của từng khoản quyên góp
    for (int i = 0; i < number_of_donations; i++)
    {
        cout << "Donations #" << (i + 1) << " = ";
        cin >> *(donations + i); //nhập số tiền quyên góp
    }
    int *arrPtr = new int[number_of_donations];//cấp phát bộ nhớ
    //Mỗi phần tử của ArrayPtr là một con trỏ tới int. Làm mỗi cái phần tử trỏ đến một phần tử trong mảng quyên góp
    for (int count = 0; count < number_of_donations; count++)
    {
        // arrPtr[count] = &donations[count];
        *(arrPtr + count) = donations[count];
    }
        
    // Sắp xếp các phần tử của mảng con trỏ
    arrSelectionSort(arrPtr, number_of_donations);

    // Hiển thị số tiền quyên góp bằng cách sử dụng mảng con trỏ. Cái này sẽ hiển thị chúng theo thứ tự được sắp xếp
    cout << "The donations, sorted in ascending order are: \n";
    showArray(arrPtr, number_of_donations);
    delete [] arrPtr;
    arrPtr = nullptr; //0x0
    // Hiển thị các khoản đóng góp theo thứ tự ban đầu của chúng.
    cout << "The donations, in their original order are: \n";
    showArray(donations, number_of_donations);
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

void swap(int *a, int *b)//định nghĩa hàm
{
    int *temp = a;
    a = b;
    b = temp;
}

//hàm hiển thị nội dung mảng
void showArray(const int array[], int size)
{
    //khởi tạo for cho chạy đến từng index của mảng
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}

//hàm hiển thị trỏ đến vị trí trong mảng
void showArrPointer(int *arr, int SIZE)
{
    //khởi tạo vòng lặp for 
    for (int count = 0; count < SIZE; count++)
        cout << *(arr + count) << " ";
    cout << endl;
}