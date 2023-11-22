#include <iostream>
#include <string>
using namespace std;

//khai bao struct wordToPigLaTin
string wordToPigLatin(string& word)
{
    string pigLatinWord = word;
    char firstLetter = pigLatinWord[0];
    pigLatinWord.erase(0, 1);
    pigLatinWord += firstLetter;
    pigLatinWord += "ay";
    return pigLatinWord;
}
int main() 
{
    //khai bao bien xau ky tu sentence
    string sentence;
    cout << "Enter a sentence: ";
    //nhap vao sentence
    getline(cin, sentence);
    //khai bao bien xau ky tu
    string pigLatinSentence;
    string word;
    //gan gai tri cho bool b=newWord = true
    bool newWord = true;
    //kiem tra dau vao
    for (char c : sentence) {
        if (isalpha(c)) {
           //neu ky tu la ky tu thuoc bang chu cai thi tang gai tri bien word len 1 don vi
            word += c;
        //neu khong thi thuc hien cac cau lenh sua
        } else {
           //neu ky tu khogn phai la chu cai thi do la ket thuc cua tu hien tai
            if (!word.empty()) {
                //neu tu hien tai khogn trong thi no chueyn sang pigLaTinSenTence
                if (!newWord) {
                    pigLatinSentence += ' ';//them mot khoang trang truoc tu moi
                }
                pigLatinSentence += wordToPigLatin(word);
                word.clear(); 
            }
            newWord = false;
            pigLatinSentence += c;
        }
    }
    //xu ly tu cuoi cung
    if (!word.empty()) {
        if (!newWord) {
            pigLatinSentence += ' ';//them khoang tra g truoc tu moi
        }
        pigLatinSentence += wordToPigLatin(word);
    }
    //xuat ra man hinh gia tri 
    cout << "Pig Latin: " << pigLatinSentence << endl;
    return 0;
}