#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    double calo, //số calo
           fatGram, //số gram chất béo
           caloFat,// số calo chất béo
           percentFat;//phần trăm calo chất béo
    //nhập số calo
    cout <<"Enter the number of calories: ";
    cin >> calo;
    //nhập vào số gram chất béo
    cout <<"Enter fat grams in a food: ";
    cin >> fatGram;
    if (calo < 0 || fatGram < 0)//xác thực đầu vào
    {
        cout <<"Enter another number.";
    }
    else 
    {
        cout << setprecision(2) << fixed;//formatting
        caloFat = fatGram * 9;//tính số calo chất béo
        percentFat = caloFat / calo;//tính số phần trăm chất béo 
        if (caloFat > calo)//xác thực đầu vào số calo chất béo
        {
            //báo lỗi
            cout << "The caloris or fat grams were incorrectly entered. Try again! ";
        }
        else 
        {
            cout <<"The percentage of calories that come from fat: ";
            if(percentFat < 0.3)//báo lượng phần trăm chất béo quá thấp
            {
                cout <<"The foof is low in fat.\n";
            }
        }
    }
    return 0;
}