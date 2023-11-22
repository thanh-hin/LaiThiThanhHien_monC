#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()//chương trình chính
{
    unsigned seed = time(0);
    // khởi tạo trình tạo số ngẫu nhiên
    srand(seed);
    // Hiển thị ba số ngẫu nhiên
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}