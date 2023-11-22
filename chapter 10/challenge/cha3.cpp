#include <iostream>
using namespace std;

//khai bao ham countWords
int countWords(const char *str);
int main() 
{
    //khai bao mang ky tu gom 2000 phan tu
    char str[2000];
    cout << "Enter a string: ";
    //nhao vao gia tri cau cac phan tu trong mang str
    cin.getline(str, 2000);
    //goi ham truyen vao do str va xuat ra man hinh
    cout << "Number of words present in the string is: " << countWords(str) << endl;
    return 0;
}
//khai bao ham coutnWords
int countWords(const char *str) 
{
    //tao bein dem
    int count = 0;
    //duyet qua tung phan tu cua mang str
    for (int i = 0; str[i] != '\0'; ++i)
    {
        //su dung cau dieu kien if, neu dieu kien if thoa man thi tang bein dme count len mot doc vi
        if (i == 0 || str[i-1] == ' ')
            ++count;
    }
    return count;
}