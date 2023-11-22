#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Hai mảng cho hai chuỗi
    const int LENGTH = 40;
    char firstString[LENGTH], secondString[LENGTH];
    // nhập 2 mảng
    cout << "Enter a string: ";
    cin.getline(firstString, LENGTH);
    cout << "Enter another string: ";
    cin.getline(secondString, LENGTH);
    // So sánh các chuỗi về sự bằng nhau với strcmp
    if (strcmp(firstString, secondString) == 0)
        cout << "You entered the same string twice.\n";
    else
        cout << "The strings are not the same.\n";
    return 0;
}