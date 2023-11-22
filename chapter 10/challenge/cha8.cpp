#include <iostream>
using namespace std;

//khai bao ham findMostFrequentChar
char findMostFrequentChar(const char* str);
int main() {
    //khai bao hang nguyen
    const int MAX_LENGTH = 100; 
    //khai bao amng ky tu
    char input[MAX_LENGTH];
    cout << "Enter a string: ";
    //nhap vao mang ky tu
    cin.getline(input, MAX_LENGTH);
    //goi ham findMostFrequentChar truyen vao do input, gan cho bien mostFrequent
    char mostFrequent = findMostFrequentChar(input);
    //xuat ra man hinh gia tri
    cout << "The most frequent character is: " << mostFrequent << endl;
    return 0;
}
char findMostFrequentChar(const char* str)
{
    //khai bao mang nguyen frequency rong
    int frequency[256] = {0};
    //khoi tao vong lap foe de duyet cac phan tu trong mang
    for (int i = 0; str[i] != '\0'; ++i) {
        int charIndex = static_cast<unsigned char>(str[i]);
        ++frequency[charIndex];//tang len mot don vi
    }
    //khai bao bien ky tu
    char mostFrequent = '\0';
    //khai bao bien nguyen
    int maxFrequency = 0;
    //khoi tao vong lap de kiem tra tan so cua moi ky tu
    for (int i = 0; i < 256; ++i) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostFrequent = static_cast<char>(i);
        }
    }
    return mostFrequent;//tra ve gia tri cua mostFrequent
}