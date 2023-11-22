#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //khai bao bein xua ky tu input
    string input;
    cout << "Enter a series of single-digit numbers with no separators. ";
    //nhap vao gia tri cua input
    cin >> input;
    //khai bao binen nguyen
    int sum = 0;
    //khai bao bien ky tu
    char highest = '0'; // Initialize highest to '0'
    char lowest = '9';  // Initialize lowest to '9'
    //khoi tao vong lap de duyet bien input
    for (char digit : input)
     {
        //neu ky tu la chu so
        if (isdigit(digit)) {
            //chuyen ky tu snag kieu du lieu so nguyen
            int num = digit - '0'; 
            sum += num;//bien sum cong don num
            //neu ky tu lon hon highest -> highest la ky tu
            if (digit > highest) {
                highest = digit;
            }
            //neu ky tu lon hon lowest -> lowest la ky tu
            if (digit < lowest) {
                lowest = digit;
            }
        }
    }
    //xuat ra man hinh cac gia tri
    cout << "Sum of single-digit numbers: " << sum << endl;
    cout << "Highest digit: " << highest << endl;
    cout << "Lowest digit: " << lowest << endl;

    return 0;
}