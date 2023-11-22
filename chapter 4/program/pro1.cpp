#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool trueValue, falseValue;//khai báo biến đúng sai
    int x = 5, y = 10;// gán x = 5 và y = 10
    trueValue = x < y;// khởi tạo giá trị với biểu thức x < y  là đúng (1)
    falseValue = y == x;// gán biểu thức x = y là sai (0) 
    //hiển thị kết quả đúng sai ra màn hình
    cout << "True is " << trueValue << endl;
    cout << "False is " << falseValue << endl;
    return 0;
}