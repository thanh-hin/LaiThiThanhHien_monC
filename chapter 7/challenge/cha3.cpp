#include <bits/stdc++.h>
using namespace std;
int inputValidate(int);
void getNumberSold(const string[], int[], const int);
int getTotal(const int[], const int);
string getHighest(const string[], const int[], const int);
string getLowest(const string[], const int[], const int);

int main()
{
    const int ARRAY_SIZE = 5;//khai bao hang nguyen chua so luong phan tu trong mang
    int number_of_jars_sold[ARRAY_SIZE];//khai bao mang nguyen chua so salsa ban duoc
    //khai bao mang xau ky tu chua ten cac loai salsa
    string salsa_names[] = {"Mild", 
                            "Medium", 
                            "Sweet", 
                            "Hot", 
                            "Zesty"};
    getNumberSold(salsa_names, number_of_jars_sold, ARRAY_SIZE);//goi ham getNumberSold truyen vao do gia tri salsa_names, number_of_jars_sold va hang ARRAY_SIZE
    cout << endl;
    for (int i = 0; i < ARRAY_SIZE; i++){//khoi toa vong lap de xuat ra so salsa ban duoc
        cout << "Sales for " << salsa_names[i] << " salsa:  " << number_of_jars_sold[i]  << " jars." << endl;
    }
    int total_sales = getTotal(number_of_jars_sold, ARRAY_SIZE);//goi ham getTotal truyen vao do gia tri number_of_jars_sold, hang ARRAY_SIZE va gan vao bien total_sales
    cout << "\nTotal sales: " << total_sales << " jars." << endl;//xuat ra man hinh gia tri bien total_sales
    string highest_selling = getHighest(salsa_names, number_of_jars_sold, ARRAY_SIZE);//goi ham getHighest truyen vao do gia tri salsa_names, number_of_jars_sold, hang ARRAY_SIZE va gan vao bien xau ky tu highest_selling
    cout << "Highest selling:  " << highest_selling << endl;//xuat ra man hinh gia tri bien highest_selling
    string lowest_selling = getLowest(salsa_names, number_of_jars_sold, ARRAY_SIZE);//goi ham getLowest truyen vao do gia tri salsa_names, number_of_jars_sold, hang ARRAY_SIZE va gan vao bien xau ky tu lowestest_selling
    cout << "Lowest selling: " << lowest_selling << endl;//xuat ra man hinh gia tri bien lowest_selling
    return 0;
}
int inputValidate(int user_number)
{//khoi tao ham nguyen inputValidate gom bien nguyen
    while (!(cin >> user_number) || user_number < 0){//neu gia tri bieu thuc trong ngoac la dung thi thuc hien cac lenh
        cout << "Error. Only positve number. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;//tra ve gia tri user_number
}
void getNumberSold(const string names_array[], int values_array[], const int SIZE)
{//khoi tao ham getNumberSold gom mang hang xau ky tu, bien nguyen, va hang nguyen
    for (int i = 0; i < SIZE; i++) {//khoi tao vong lap
        cout << "Enter number of jars sold for " << names_array[i]  << ": ";//xuat ra gia tri cua phan tu i trong mang 
        values_array[i] = inputValidate(values_array[i]);//goi ham inputValidate truyen vao do gia tri cua phan tu thi i trong mang va gan vao phan tu values_array{i}
    }  
}
int getTotal(const int array[], const int SIZE)
{//khoi tao ham getTotal gom mang hang xau ky tu va hang nguyen
    int total = 0;//cho bien total bang 0
    for (int i = 0; i < SIZE; i++)//khoi tao vong lap
        total += array[i];//cong va gan gia tri cho bien total
    return total;
}
string getHighest(const string array1[], const int array2[], int ARRAY_SIZE)
{//khoi tao ham getHighest gom mang hang xau ky tu, mang hang nguyen va hang nguyen
    int highest = array2[0];//gan gia tri cua phan tu 0 trong mang array2 cho bien highest
    string highest_name = array1[0];//khoi tao bien xau ky tu highest_name bang phan tu 0 trong mang 1
    for (int i = 1; i < ARRAY_SIZE; i++){//khoi tao vong lap, tim ra gia tri highest va highest_name
        if (array2[i] > highest){//neu bieu thuc trong ngoac thoa man thi thuc hien cau lenh nhu sau
            highest = array2[i];
            highest_name = array1[i];
            
        } 
        else if (array2[i] == highest){//neu bieu thuc trong ngoac if trong thoa man thi thuc hien cau lenh nhu sau
            highest = array2[i];
            highest_name += ", ";
            highest_name += array1[i];    
        } 
    }
    return highest_name;//tra ra gia tri cua bien highest_name
}
string getLowest(const string array1[], const int array2[], int ARRAY_SIZE)
{//khoi tao ham getLowest gom mang hang xau ky tu, mang hang nguyen va hang nguyen
//tao bien va gan gia tri tuong tu khi tim ra highest va highest_name
    int lowest = array2[0];
    string lowest_name = array1[0];
    for (int i = 1; i < ARRAY_SIZE; i++){//khoi tao vong lap, tim ra gia tri lowest va lowest_name
        if (array2[i] < lowest){//neu beiu thuc trong ngoac thoa man thi thuc hien cau lenh
            lowest = array2[i];
            lowest_name = array1[i];
        } 
        else if (array2[i] == lowest){//neu bieu thuc trong cau lenh if khong thoa amn thi thuc hien cau lenh
            lowest = array2[i];
            lowest_name += ", ";
            lowest_name += array1[i];
        }
    }
    return lowest_name;
}