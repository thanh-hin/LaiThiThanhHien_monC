#include <bits/stdc++.h>
using namespace std;
//khai bao hang so cot va dong
const int ROWS    = 3,
          COLUMNS = 5;
double inputValidate();
void getInfo(double[][COLUMNS]);
double getAverage(const double[][COLUMNS]);
double getLeast(const double[][COLUMNS]);
double getHighest(const double[][COLUMNS]);
int main()
{
    //khai bao cac bien thuc
    double pounds_of_food[ROWS][COLUMNS];
    double average_per_day,
           least_per_week,
           highest_per_week;
    getInfo(pounds_of_food);//goi ham getInfo truyen vao mang pounds_of_food
    average_per_day = getAverage(pounds_of_food);//goi ham getAverage truyen vao mang pounds_of_food va gan vao gia tri  average_per_day
    cout << "Average amount eaten during the week per day = " << average_per_day << endl;
    least_per_week = getLeast(pounds_of_food);//goi ham getLeast truyen vao mang pounds_of_food va gan vao gia tri cua bien least_per_week
    cout << "Lowest amount eaten during the week = "<< least_per_week << endl;
    highest_per_week = getHighest(pounds_of_food);//goi ham getHighest truyen vao mang pounds_of_food va gan vao gia tri cua bien highest_per_week
    //xuat ra man hinh 
    cout << "Highest amount eaten during the week = " << highest_per_week << endl << endl;
    return 0;
} 
double inputValidate(){//khoi tao ham inputValidate 
    double number;
    while(!(cin >> number) || number < 0){//neu gia tri bieu thuc trong ngoac la dung thi thuc hien cac lenh
        cout << "Error, enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}
void getInfo(double array[][COLUMNS]){//khoi tao ham getInto gom mang thuc hai chieu 
    cout << "\nEnter the following information, " << endl << "How many pounds of food eaten per day: " << endl;
    for(int row = 0; row < ROWS; row++){//khoi toa vong lap duyet gia tri cua dong
        for(int column = 0; column < COLUMNS; column++){//khoi tao vong lap duyet gia tri cua cot
            cout << "Monkey #" << (row + 1) << ", on day " << (column +1) << ": ";
            array[row][column] = inputValidate();//goi ham inputValidate va gan bang phan tu dong row va cot column
        }
        cout << endl;
    }
}
double getAverage(const double array[][COLUMNS])
{//khoi tao ham getAverage gom mang thuc hai chieu 
    double columns_sum;//khai bao bien thuc chua gia tri tong cua cot
    int total_elements = ROWS * COLUMNS;//gan gia tri cho bien total_elements
    for(int row = 0; row < ROWS; row++){//khoi tao vong lap duyet cac gia tri cua dong
        for(int column = 0; column < COLUMNS; column++)//khoi tao vong lap duyet cac gia tri cua cot
            columns_sum += array[row][column];//cong va gan vao bien  columns_sum
    }
    return columns_sum / total_elements;//tra ve gia tri columns_sum / total_elements
}
double getLeast(const double array[][COLUMNS])
{//khoi tao ham getLeast gom mang thuc hai chieu
double sum, //khoi tao bien thuc sum va mang thuc local_array[ROWS]
           local_array[ROWS];
    for(int row = 0; row < ROWS; row++){//khoi tao vong lap duyet cac gia tri cua dong
        sum = 0;
        for(int column = 0; column < COLUMNS; column++)//khoi tao vong lap duyet cac gia tri cua cot
            sum += array[row][column];//cong va gan vao bien sum
        local_array[row] = sum;//gan gia tri cho phan tu local_array[row] 
    }
    double lowest_number = local_array[0];//gan gia tri cho lowest_number
    for (int number = 1; number < ROWS; number++){//khoi tao vong lap duyet cac gia tri cua dong tu dong 1
        if (local_array[number] <= lowest_number)//neu gia tri trong bieu thuc thoa man thi thuc hien lenh
            lowest_number = local_array[number];//gan gia tri cho lowest_number
    }
    return lowest_number;//tra ve gia tri cua lowest_number
}
double getHighest(const double array[][COLUMNS])
{//khoi tao ham getHighest gom mang thuc hai chieu 
    double sum, //khoi tao bien thuc sum va mang thuc local_array[ROWS]
           local_array[ROWS];
    for(int row = 0; row < ROWS; row++){//khoi tao vong lap duyet cac gia tri cua dong
        sum = 0;//gan gia tri cho sum bang 0
        for(int column = 0; column < COLUMNS; column++)//khoi tao vong lap duyet cac gia tri cua cot
            sum += array[row][column];//cong va gan gia tri cho bien sum
        local_array[row] = sum;//gan sum vao mang local_array[row] 
    }
    double highest_number = local_array[0];//gan gia tri cho highest_number
    for (int number = 1; number < ROWS; number++){//khoi tao vong lap duyet cac gia tri cua dong tu dong 1
        if (local_array[number] >= highest_number)//neu gia tri trong bieu thuc thoa man thi thuc hien lenh
            highest_number = local_array[number];
    }
    return highest_number;//tra ve gia tri bien highest_number
}