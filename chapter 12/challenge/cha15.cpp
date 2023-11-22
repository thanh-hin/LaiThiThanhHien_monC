#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 
using namespace std;

int main()
{
    //khai bao bein nguyen
    int totalWords = 0;
    int totalLines = 0;
    //khai bao bien xau ky tu
    string lineRead;
    ifstream inputFile("text.txt");
    //neu mo file thanh cong thi thuc hien cac cau lenh
    if(!inputFile){
        cout << "Could not open file! Please try again!\n";
        return 0;
    }
    //thuc hien cac cau lenh khi dieu kien o while thoa amn
    while(getline(inputFile, lineRead)){
        int currentWordCount = 1;
        //khoi tao vong lap for
        for(int counter = 0; counter < lineRead.length(); counter++){
            //neu gap khoang trang thi tang bien dem len 1 don vi
            if(lineRead[counter] == ' ')
                currentWordCount++;
        }
        //cong tu hien tai vao bo dem tu 
        totalWords += currentWordCount;
        //tang bein totalLines
        totalLines++;
    }
    //formating
    cout << fixed << setprecision(2);
    //xuat ra man hinh gia tri
    cout << "The average is " << (double)totalWords/totalLines << " words per line.";
    return 0;
}