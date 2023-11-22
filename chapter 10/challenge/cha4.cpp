#include <iostream>
using namespace std;
#include <iostream>
#include <cstring>

//khai bao ham calculateAverageLetters
double calculateAverageLetters(const char* str);
int main()
{
    //khia bao hang tu
    const int MAX_LENGTH = 1000;
    //khai bao mang ky tu
    char inputString[MAX_LENGTH];
    cout << "Enter a string: ";
    //nhap vao mang ky tu
    cin.getline(inputString, MAX_LENGTH);
    //gan gai tri cho bien averageLetters bang ham calculateAverageLettes duoc turyen vao inputString
    double averageLetters = calculateAverageLetters(inputString);
    //xuat ra man hinh gia tri bien averageLetters
    cout << "Average number of letters per word: " << averageLetters << endl;
    return 0;
}
//khai bao ham calculateAverageLetters
double calculateAverageLetters(const char* str)
{
    //khoi tao cac bien nguyen
    int totalLetters = 0;
    int totalWords = 0;
    //kahi bao bien dung sai inWord
    bool inWord = false;
    //khoi tao vong lap for de duyet qua ca phan tu trong mang
    for (int i = 0; str[i] != '\0'; ++i) {
        //neu str[i] la chu cai thi tang gia tri bien totalLetters len mot don vi
        if (isalpha(str[i])) {
            totalLetters++;
            inWord = true;//gan lai gai tri cho bien inWord
        //neu str[i] khong phai la chu cai thi tang gai tir bien totalWords len mot don vi, gan gai tri ho inWord
        } else if (inWord) {
            totalWords++;
            inWord = false;
        }
    }
    //neu inWord co gia tri true ti thuc hien cau lenh
    if (inWord) {
        totalWords++;
    }
    //neu totalWords bang 0 thi tra ve gai tri 0.0
    if (totalWords == 0) {
        return 0.0;
    }
    return static_cast<double>(totalLetters) / totalWords;
}