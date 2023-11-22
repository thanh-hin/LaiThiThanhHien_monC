#include <bits/stdc++.h>
using namespace std;

bool testNum(char [], int);//khai báo hàm

int main()//hàm chính
{  //khai báo hằng số
    const int SIZE = 8;
    //khai báo biến kí tự
    char customer[SIZE];
    cout << "Enter a customer number in the form ";
    cout << "LLLNNNN\n";
    cout << "(LLL = letters and NNNN = numbers): ";
    //nhập vào số customer
    cin.getline(customer, SIZE);
    //khởi tạo câu điều kiện
    if (testNum(customer, SIZE))//(testNum(customer,SIZE)==true)
        cout << "That's a valid customer number.\n";
    else//(testNum(customer,SIZE)==false)
    {
        cout << "That is not the proper format of the ";
        cout << "customer number.\nHere is an example:\n";
        cout << " ABC1234\n";
    }
    return 0;
}

//hàm kiểm tra 
bool testNum(char custNum[], int size)//định nghĩa hàm
{
    //khai báo biến
    int count;
    //khởi tạo vòng lặp for
    for (count = 0; count < 3; count++)
    {
        if (!isalpha(custNum[count]))//(isalpha(custNum[count])==false)
            return false;
    }
    //khoi tao vong lpa for, kiem tra cac ky tu con lai cho chu so
    for (count = 3; count < size - 1; count++)
    {
        if (!isdigit(custNum[count]))//(isdigit(custNum[count])==false)
            return false;
    }
    //gia tri tra ve true
    return true;
}