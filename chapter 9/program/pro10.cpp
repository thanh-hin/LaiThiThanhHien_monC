#include <bits/stdc++.h>
using namespace std;
int main()//hàm chính
{
    int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};//khai báo mảng
    int *nums = set; // Tạo điểm số để thiết lập
    // hiển thị các giá trị trong mảng
    cout << "The numbers in set are:\n";
    cout << *nums << " "; // hiển thị giá trị đầu tiên
    while (nums < &set[7])
    {
        // Nâng cao số để trỏ đến phần tử tiếp theo
        nums++;
        // Hiển thị giá trị được trỏ bằng số
        cout << *nums << " ";
    }
    // Hiển thị các số theo thứ tự ngược lại
    cout << "\nThe numbers in set backward are:\n";
    cout << *nums << " "; // hiển thị phần tử đầu tiên
    while (nums > set)
    {
        // Di chuyển lùi về phần tử trước đó
        nums--;
        // Hiển thị giá trị được trỏ bằng số
        cout << *nums << " ";
    }
    return 0;
}