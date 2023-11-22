#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> values;//khai báo vecto
    values.push_back(1);//đẩy 1 vô vec
    values.push_back(2);//đẩy 2 vô vec
    values.push_back(3);//đẩy 3 vô vec
    cout << "The size of values is " << values.size() << endl;//xuất kích thước vec
    //Xóa một giá trị khỏi vectơ
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;
    // hãy xóa một giá trị khác khỏi vectơ
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;
    //Xóa giá trị cuối cùng khỏi vectơ
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;
    return 0;
}