#include <iostream>
using namespace std;
int main ()//chương trình chính
{
    double theOceanLevel = 1.5;//khai báo biến mực biển tăng mỗi năm (mm)
    //hiển thị mực nước tăng lên trong x năm
    cout <<"The number of millimeters higher than the current level that the ocean\'s level will be in 5 years: "<<theOceanLevel * 5 << endl;
    cout <<"The number of millimeters higher than the current level that the ocean\'s level will be in 7 years: "<<theOceanLevel * 7 << endl;
    cout <<"The number of millimeters higher than the current level that the ocean\'s level will be in 10 years: "<<theOceanLevel * 10 << endl;
    return 0;
}