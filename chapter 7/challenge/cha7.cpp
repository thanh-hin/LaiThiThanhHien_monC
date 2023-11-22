#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    vector<double> numbers;//khai bao vector thuc numbers
    ifstream inputFile;
    string user_file_name;//khai bao xau ky tu
    cout << "What is the file name? ";
    cin >> user_file_name;//nhap vao ten xau ky tu
    inputFile.open(user_file_name);//mo file
    if (inputFile){
        int file_number;//khai bao bien nguyen file_number
        while(inputFile >> file_number)
            numbers.push_back(file_number);//day vao vector numbers
        inputFile.close();//dong file
    }
    else{
        cout << "Invalid file." << endl;
        exit(EXIT_SUCCESS);
    }
    double lowest_number = numbers[0];//khai bao bien thuc  lowest_number va gan gia tri bang phan tu numbers[0]
    for (int i = 1; i < numbers.size(); i++)//khoi tao vong lap
        if (numbers[i] <= lowest_number)//neu bieu thuc trong ngoac thoa thi thucc hien cau lenh
            lowest_number = numbers[i];
    cout << "Lowest Number = " << lowest_number << endl;
    double highest_number = numbers[0];//khai bao bien thuc   highest_number va gan gia tri bang phan tu numbers[0]
    for (int i = 1; i < numbers.size(); i++)//khoi tao vong lap
        if (numbers[i] >= highest_number)//neu bieu thuc trong ngoac thoa thi thucc hien cau lenh
            highest_number = numbers[i];
    cout << "Highest Number = " << highest_number << endl;//xuat ra man hinh
    double total = 0;//khai bao bien thuc total va gan gia tri bang 0
    for (int i = 0; i < numbers.size(); i++)//khoi tao vong lap
        total += numbers[i];//cong roi gan vao bien total
    cout << "Total = " << total << endl;//xuat ra man hinh
    double average = total / numbers.size();//khai bao va gan gai tri bang cong thuc cho san cho bien thuc average
    cout << "Average = " << average << endl;//xuat ra man hinh
    return 0;
}