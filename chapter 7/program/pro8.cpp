#include <iostream>
using namespace std;
int main()
{
    const int NUM_LETTERS = 10;//khai báo số ký tự 
    char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E',//khai báo các ký tự trong mảng
                                'F', 'G', 'H', 'I', 'J'};
    cout << "Character" << "\t" << "ASCII Code\n";
    cout << "---------" << "\t" << "----------\n";
    //xuất các ký tự theo mã ASCII
    for (int count = 0; count < NUM_LETTERS; count++)
    {
        cout << letters[count] << "\t\t";
        cout << static_cast<int>(letters[count]) << endl;
    }
    return 0;
}