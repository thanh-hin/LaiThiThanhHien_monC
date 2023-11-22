#include <iostream>
#include <fstream>
using namespace std;
//khai bao hang chi so cotva so dong
const int ROWS = 3, 
          COLUMNS = 30;
//kha bao xau ky tu, ky tu
string weather_types[ROWS]  = {"Rainy", "Cloudy", "Sunny"};
string months[ROWS]         = {"June", "July", "August"};
char weather_day_names[ROWS]= {'R', 'C', 'S'};
void getInfoFromFile(char[][COLUMNS], string);
void displayMonths(const char[][COLUMNS], int);
void displayDays(const char[][COLUMNS], int);
void displayHighest(const char[][COLUMNS]);

int main()
{
    char weather_conditions[ROWS][COLUMNS];//khoi tao mang ky tu hai chieu
    getInfoFromFile(weather_conditions, "RainOrShine.txt");//goi ham getInfoFromFile truyen vao do gia tri eather_conditions, "RainOrShine.txt"
    for (int i = 0; i < ROWS; i++)//khoi tao vong lap 
        displayDays(weather_conditions, i);//goi ham  displayDays truyen vao do gia tri weather_conditions, i
    for (int i = 0; i < ROWS; i++)//khoi tao vong lap 
        displayMonths(weather_conditions, i);//goi ham  displayMonths truyen vao do gia tri weather_conditions, i
    displayHighest(weather_conditions);//goi ham  displayMonths truyen vao do gia tri weather_conditions
    cout << endl;
    return 0;
}
void getInfoFromFile(char array[][COLUMNS], string file_name)
{//khoi tao ham getInfoFromFile gom mang ky tu, bien ky tu
    ifstream inputFile;
    inputFile.open(file_name);//lay du lieu tu file
    for(int row = 0; row < ROWS; row++){//khoi tao vong lap duyet theo hang
        for(int col = 0; col < COLUMNS; col++)//khoi tao vong lap duyet theo cot
            inputFile >> array[row][col];//dua vao gia tri phan tu hang row cot col
    }
    inputFile.close();//dong file
}
void displayDays(const char array[][COLUMNS], int i){//khoi tao ham displayDays gom mang ky tu hang, bien nguyen
    int total;//khoi tao bien total
    for (int row = 0; row < ROWS; row++){ //khoi tao vong lap duyet theo hang
        total = 0;//gan gia tri cho bien total bang 0
        for (int col = 0; col < COLUMNS; col++)//khoi tao vong lap duyet theo cot
            if (array[row][col] == weather_day_names[i]){//neu bieu thuc trong ngoac thoa man thi bien total tang len mot don vi
               total++;
            }
        cout << "Total " << weather_types[i] << " days for " << months[row] << " = " << total << endl;//xuat ra man hinh
    }
    cout << endl;
}
void displayMonths(const char array[][COLUMNS], int i){//khoi tao ham displayMonths gom mang ky tu hang, bien nguyen
    int total = 0;//khoi tao va gan gia tri cho bien total
    for(int row = 0; row < ROWS; row++){//khoi tao vong lap duyet theo hang
        for(int col = 0; col < COLUMNS; col++)//khoi tao vong lap duyet theo cot
            if(array[row][col] == weather_day_names[i]){//neu bieu thuc trong ngoac thoa man thi bien total tang len mot don vi 
            total++;
            }
    }
cout << "Total " << weather_types[i] << " days for all months = " << total << endl;//xuat ra man hinh
}
void displayHighest(const char array[][COLUMNS]){//khoi tao ham displayHighest gom mang ky tu hang
    int sum;//khoi tao bien sum
    int total_rainy_days[ROWS];//khoi tao mang nguyen total_rainy_days[ROWS]
    for (int row = 0; row < ROWS; row++){//khoi tao vong lap duyet theo hang
        sum = 0;//gan gia tri cho bien sum bang 0
        for (int col = 0; col < COLUMNS; col++)//khoi tao vong lap duyet theo cot
            if (array[row][col] == 'R'){//neu bieu thuc trong ngoac thoa man thi bien sum tang len mot don vi
               sum++;
            }      
        total_rainy_days[row] = sum;//gan gia tri bien sum bang gia tri total_rainy_days[row]
    }
    cout << endl;
    int highest_rainy_day = total_rainy_days[0];//khoi tao bien nguyen highest_rainy_day co gia tri bang phan tu total_rainy_days[0]
    string highest_rainy_day_name = months[0];//khoi tao bien xau ky tu highest_rainy_day_name co gai tri bang phan tu months[0]
    for(int i = 1; i < ROWS; i++){//khoi tao vong lap duyet theo hang
        if(total_rainy_days[i] > highest_rainy_day)
        {//neu gia tri trong ngoac thoa man thi thuc hien cac cau lenh 
            highest_rainy_day = total_rainy_days[i];
            highest_rainy_day_name = months[i];
        } 
        else if(total_rainy_days[i] == highest_rainy_day)
        {//neu gia tri trong ngoac thoa man thi thuc hien cac cau lenh 
            highest_rainy_day = total_rainy_days[i];
            highest_rainy_day_name += ", ";
            highest_rainy_day_name += months[i];
        }
    }
   //hiển thi kết quả
    cout << highest_rainy_day_name << " had the highest rainy days, " << "with " << highest_rainy_day << " days." << endl;
}