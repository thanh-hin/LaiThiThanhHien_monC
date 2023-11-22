#include <iostream>
using namespace std;
int main()
{
    const float PERYEAR = 1.5;//mực nước tăng lên mỗi năm
    float oceanOfLevel;//mực nước biển
    //hiển thị số mm mực nước biển tăng mỗi năm
    for ( int i = 1; i<=25;i++)
    {
        cout << "year "<<i<<": "<<PERYEAR*i<<endl;//hiển thị kết quả
    }
    return 0;
}