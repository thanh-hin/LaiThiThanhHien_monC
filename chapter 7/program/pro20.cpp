#include <bits/stdc++.h>
using namespace std;
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4;//khai bao so luong phan tu trong mang
    double testScores[SIZE],//khai bao cac bien thuc 
            total,
            lowestScore,
            average;
    cout << fixed << showpoint << setprecision(1);//mac dinh mot so thap phan sau dau phay
    getTestScores(testScores, SIZE);//goi ham getTestScores va truyen vao do mang testScores va hang nguyen SIZE
    total = getTotal(testScores, SIZE);//gan gia tri total bang cho ket qua cua hang ham getTotal khi truyen vao do mang testScores va hang nguyen SIZE
    lowestScore = getLowest(testScores, SIZE);//gan gia tri lowestScore bang cho ket qua cua hang ham getLowers khi truyen vao do mang testScores va hang nguyen SIZE
    total -= lowestScore;//gia tri cua bien total bang gia tri total tru cho lowestScore
    average = total / (SIZE - 1);//gia tri cua bien averrage duoc gan bang cong thuc cho san
    cout << "The average with the lowest score " << "dropped is " << average << ".\n";//xuat ra man hinh 
    return 0;
    }
    void getTestScores(double scores[], int size){//khoi tao ham void getTestScores voi bien nguyen size va mang thuc scores 
    int index;
    for(index = 0; index <= size - 1; index++){//khoi tao vong lap nhap vao gia tri cua phan tu tu index trong mang
    cout << "Enter test score number " << (index + 1) << ": ";
    cin >> scores[index];
    }
    }
    double getTotal(const double numbers[], int size){//khoi tao ham double getTotal voi bien nguyen size va hang so thuc numbers
    double total = 0;//khoi tao biem thuc total bang 0
    for (int count = 0; count < size; count++)
    total += numbers[count];//cong roi gan gia tri cho bien total
    return total;
    }
    double getLowest(const double numbers[], int size){//khoi tao ham double getLowest voi bien nguyen size va hang so thuc numbers
    double lowest;//khoi tao bien thuc lowest
    lowest = numbers[0];//gan gai tri bien lowest bang phan tu thu 1
    for (int count = 1; count < size; count++){//khoi tao vong lap 
    if (numbers[count] < lowest)//neu bieu thuc trong ngoac thoa man thi gia tri cua bien lowest duoc gan nhu sau
    lowest = numbers[count];
    }
    return lowest;
}