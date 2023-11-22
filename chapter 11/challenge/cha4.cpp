#include <iostream>
#include <string>
using namespace std;

//khai bao struct WeatherStats
struct WeatherStats{
    int rain;
    int highTemp;
    int lowTemp;
    double avgTemp;
};
//khai bao ham
void getData(WeatherStats &);
double monthlyAvgRain(const WeatherStats [], const int);
int totalRain(const WeatherStats [], const int);
void getHighest(const WeatherStats [], const int);
void getLowest(const WeatherStats [], const int);
double getYearlyAvgTemp(const WeatherStats [], const int);
//khai bao hang nguyen
const int NUM_MONTHS = 12;
//khai bao mang xua ky tu gom cac phan tu
string monthNames[NUM_MONTHS] = {"January", "February", "March",
                                 "April", "May", "June", "July",
                                 "August", "September", "October",
                                 "November", "December"};
int main()
{
    //dinh nghia mang
    WeatherStats data[NUM_MONTHS];
    //khoi tao vong lap for, nhap vao cac gia tri cua cac phan tu trong data
    for(int i = 0; i < NUM_MONTHS; i++){
        cout << "Enter data for " << monthNames[i];
        cout << endl;
        getData(data[i]);//goi ham getData truyen vao do phan tu data[i]
        cout << endl << endl;
    }
    //goi cac ham va truyen vao do data va NUM_MONTHS
    cout << "Average monthly rainfall: ";
    cout << monthlyAvgRain(data, NUM_MONTHS);
    cout << "\nYearly total rainfall: ";
    cout << totalRain(data, NUM_MONTHS);
    getHighest(data, NUM_MONTHS);
    getLowest(data, NUM_MONTHS);
    cout << "Yearly average temperature: ";
    cout << getYearlyAvgTemp(data, NUM_MONTHS);
    return 0;
}
//khai bao ham getData gom struct WeatherStats w
void getData(WeatherStats &w){
    cout << "Enter rainfall: ";
    //nhap vao thanh vien rain cua w
    cin >> w.rain;
    cout << "Enter high temperature: ";
    //nhap vao thanh vien hightTemp cua w
    cin >> w.highTemp;
    //xac thuc dau vao
    while(w.highTemp < -100 || w.highTemp > 140){
        cout << "Enter a temperature within the range";
        cout << "[-100 to +140]: ";
        cin >> w.highTemp;
    }
    //nhap vao thanh vien lowTemp cua w
    cout << "Enter low temperature: ";
    cin >> w.lowTemp;
    //xac thuc dau vao
    while(w.lowTemp < -100 || w.lowTemp > 140){
        cout << "Enter a temperature within the range";
        cout << "[-100 to +140]: ";
        cin >> w.lowTemp;
    }
    //gan gia tri cho thanh vien avgTemp bang bieu thuc
    w.avgTemp = (w.lowTemp + w.highTemp) / 2.0;
}
//khai bao ham monthlyAvgRain
double monthlyAvgRain(const WeatherStats w[], const int numElements){
    //khai bao bien thuc
    double avg;
    //gan gia tri cho bien avg bang bieu thuc cho san
    avg = (double)totalRain(w, numElements) / numElements;
    //tra ve gia tri bien avg
    return avg;
}
//khai bao ham totalRain
int totalRain(const WeatherStats w[], const int numElements){
    //tao bien total
    int total = 0;
    //khoi tao vong lap for de tinh toa gia tri total
    for(int i = 0; i < numElements; i++)
        //cong don gia tri w[i].rain cho bien total
        total += w[i].rain;
    //tra ve gia tri bien total
    return total;
}
//khai bao ham getHighest
void getHighest(const WeatherStats w[], const int numElements){
    //khai bao bien nguyen 
    int highIndex = 0, high = w[highIndex].highTemp;
    //tao vong lap for de tim highTemp
    for(int i = 0; i < numElements; i++){
        if(w[i].highTemp > high){
            high = w[i].highTemp;
            highIndex = i;
        }
    }
    cout << "\nThe yearly highest temperature was " << high;
    cout << ", and it occurred in " << monthNames[highIndex] << endl;
}
//khai bao ham getLowest
void getLowest(const WeatherStats w[], const int numElements){
    //khai bao bien nguyen
    int lowIndex = 0, low = w[lowIndex].lowTemp;
    //khoi tao vong lpap for de tim towIndex
    for(int i = 0; i < numElements; i++){
        if(w[i].lowTemp < low){
            low = w[i].lowTemp;
            lowIndex = i;
        }
    }
    cout << "\nThe yearly lowest temperature was " << low;
    cout << ", and it occurred in " << monthNames[lowIndex] << endl;
}
//khai bao ham getYearlyAvgTemp
double getYearlyAvgTemp(const WeatherStats w[], const int numElements){
    //khai bao bien thuc
    double total = 0, avg;
    //khoi tao vong lap for de duyet gia tri cho total
    for(int i = 0; i < numElements; i++)
        total += w[i].avgTemp;
    //gan gia tri cho bien avg
    avg = (double)total/numElements;
    //tra ve gia tri cua bien avg
    return avg;
}