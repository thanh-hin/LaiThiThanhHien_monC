#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //khai bao bien xau ky tu
    string inputSentence, formattedSentence;
    cout << "Enter a sentence with words run together: ";
    //nhap vao bien inputSentence
    getline(cin, inputSentence);
    //them ky tu inputSentences khi da duoc chuyen thanh ky tu thuong vao formattedSentences
    formattedSentence += toupper(inputSentence[0]);
    //khoi tao vong lap for
    for (int i = 1; i < inputSentence.length(); ++i) {
        //neu ky tu hien tai al chu hao -> them khoang trang truoc do
        if (isupper(inputSentence[i])) {
            formattedSentence += ' ';
        }
        //them ky tu hien tai khi da duoc chuyen thanh ky tu thuong vao formattedSentences
        formattedSentence += tolower(inputSentence[i]);
    }
    //xuat ra man hinh gia tri bien formattedSentences
    cout << "Formatted sentence: " << formattedSentence << endl;
    return 0;
}