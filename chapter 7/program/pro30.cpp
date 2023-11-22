#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> values(100);//khai báo vec
    cout << "The values vector has " << values.size() << " elements.\n";//xuất kích thước vec
    cout << "I will call the clear member function...\n";
    values.clear();//xóa toàn bộ phần tử trong vec
    cout << "Now, the values vector has " << values.size() << " elements.\n";//xuất kích thước vec sau khi xóa
    return 0;
}