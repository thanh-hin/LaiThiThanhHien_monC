#include <bits/stdc++.h>
using namespace std;

//khai báo hàm
bool isPrime(int);

int main()//hàm chính
{
    //mở fie
    ofstream outputFile;
    outputFile.open("primeNumber.txt");
    // xử lí chương trình
    if (outputFile)
    {
        for (int i = 1; i <= 100; i++)//chạy từ 1-100
        {
            if(isPrime(i))//isPrime(i)==true
                outputFile << i << endl;//viết số nguyên tố vô file
        }
        // đóng file
        outputFile.close();
        cout << "Numbers written to file." << endl;
    }
    else//báo lỗi không mở được file
        cout << "Error opening the file.\n";
    return 0;
} 

//hàm xác định số nguyên tố
bool isPrime(int number)//định nghĩa hàm
{
    int isPrime = 0;//khai báo biến có gán giá trị
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            isPrime++;
    }
    return isPrime == 2 ? 1 : 0;//trả về kết quả biến số là số nguyên tố đúng hay sai
}
