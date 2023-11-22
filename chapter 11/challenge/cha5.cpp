#include <iostream>
using namespace std;

//khai bao struct WeatherInfor
struct WeatherInfo{
    double totalRain;
    double highTemp;
    double lowTemp;
    double avgTemp;
};
//khai bao enum Month
enum Month{
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, 
     JUNE, JULY, AUGUST, SEPTEMBER, 
    OCTOBER, NOVEMBER, DECEMBER
};
//khai bao struct WeatherStatistics
struct WeatherStatistics{
    double avgMonthRain;
    double totalRainfall;
    Month indexMin;
    Month indexMax;
    double avgMonthTemp;
};
//khai bao ham
void storeWeatherInfo(WeatherInfo[]);
void calculateStatistics(const WeatherInfo[],WeatherStatistics&);
void showStatistics(const WeatherInfo[],
                   const WeatherStatistics&);
string getMonthName(const Month);

int main()
{
    //tao ban ghi months
    WeatherInfo months[12];
    WeatherStatistics record;
    //goi ham stroreWeatherInfo va truyen vao do gia tri months
    storeWeatherInfo(months);
    //goi ham calculateStatistics va truyen vao do gia tri months, record
    calculateStatistics(months,record);
    //goi ham showStatistics va truyen vao do gia tri months, record
    showStatistics(months,record);
    return 0;
}
//khai bao ham storeWeatherInfo
void storeWeatherInfo(WeatherInfo months[])
{   //khoi tao vong lap for
    for(Month i = JANUARY; i<= DECEMBER; i = static_cast<Month>(i + 1))
      {
        cout << "Please enter the information about month ";
        cout << (i+1)<<", \n";
        cout << "  Total Rainfall : ";
        //nhap vao thanh vien totalRain cua months
        cin  >> months[i].totalRain;
        //xac thuc dau vao
        while (months[i].totalRain < 0)
        {
            cout << "Total Rainfalls can not be negative,\n";
            cout << "Enter the value again : ";
            cin  >> months[i].totalRain;
        }
        cout << "High Temperature : ";
        //nhap vao thanh vien highTemp cua months
        cin  >> months[i].highTemp;
        //xac thuc dau vao
        while (months[i].highTemp < -100 || months[i].highTemp > 140)
           {
              cout <<"Temperatures range from -100 to 140,\n";
              cout <<"High Temperature : ";
              cin  >>months[i].highTemp;
            }
        cout <<" Low Temperature : ";
        //nhap vao thanh vien lowTemp
        cin  >> months[i].lowTemp;
        //xac thuc dua vao
        while (months[i].lowTemp < -100 ||months[i].lowTemp > 140 || months[i].lowTemp > months[i].highTemp)
            {
              cout <<"Temperatures range from -100 to 140,\n";
              cout <<"and of course, could not be more than\n";
              cout <<"the highest temperature entered before.\n";
              cout <<" Low Temperature : ";
              cin  >>months[i].lowTemp;
            }
        //gan gia tri cho thanh vien avgTemp cua months
        months[i].avgTemp = (months[i].lowTemp + months[i].highTemp)/2;
      }
    }
//khai bao ham calculateStatistics
void calculateStatistics(const WeatherInfo months[], WeatherStatistics& record)
{
    record.indexMin = JANUARY;
    record.indexMax = JANUARY;
    record.totalRainfall = 0;
    double totalAvgTemp = 0;
    //khoi tao vong lap for de tinh toan cac gia tri thanh vien
    for(Month i = JANUARY; i<= DECEMBER; i = static_cast<Month>(i + 1) )
    {
        record.totalRainfall += months[i].totalRain;
        totalAvgTemp += months[i].avgTemp;
        if(months[record.indexMin].lowTemp >  months[i].lowTemp )
        {
                record.indexMin = i;
        }
        if(months[record.indexMax].highTemp < months[i].highTemp )
        {
                record.indexMax = i;
        }
    }
    //gan gia tri cho cac thanh vien cua record bang bieu thuc
    record.avgMonthRain = record.totalRainfall / 12;
    record.avgMonthTemp = totalAvgTemp / 12;
}
//khai bao ham showStatistics
void showStatistics(const WeatherInfo months[], const WeatherStatistics& record)
{
   //xuat cac gai tri cua cac thanh vien ra man hinh
    cout <<"Average Monthly Rain : "<< record.avgMonthRain << endl;        
    cout <<"     Total Rainfalls : "<< record.totalRainfall << endl;
    cout <<"  Lowest Temperature : "<<months[record.indexMin].lowTemp<< endl;
    //xuat ra gia tri ham getMonthName khi truyen vao thanh vien idexMin cua record
    cout <<"   which Occurred on : "<<getMonthName(record.indexMin)<< endl;
    cout <<" Highest Temperature : "<<months[record.indexMax].highTemp<< endl;
    //xuat ra gia tri ham getMonthName khi truyen vao thanh vien idexMax cua record
    cout <<"   which Occurred on : "<<getMonthName(record.indexMax)<< endl;
    cout <<" Average Temperature : "<< record.avgMonthTemp<<endl;
}
//khai bao ham getMonthName
string getMonthName(const Month m)
{   
  //khai bao bien xau ky tu
    string month;
    //khoi tao cau lenh switch de chia truong hop cho m, m thuoc case nao thi  thuc hien cau lenh thuoc case do, dung man hinh
    switch(m){
        case JANUARY:
             month = "January";
             break;
        case FEBRUARY:
             month = "February";
             break;
        case MARCH:
             month = "March";
             break;
        case APRIL:
             month = "April";
             break;
        case MAY:
             month = "May";
             break;
        case JUNE:
             month = "June";
             break;
        case JULY:
             month = "July";
             break;
        case AUGUST:
             month = "August";
             break;
        case SEPTEMBER:
             month = "September";
             break;
        case OCTOBER:
             month = "October";
             break;
        case NOVEMBER:
             month = "November";
             break;
        case DECEMBER:
             month = "December";
             break;
        default:
             break;
        }
        //tra ve gia tri cua month
        return month;
    }

