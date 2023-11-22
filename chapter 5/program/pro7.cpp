#include <iostream>
using namespace std;
int main ()
{
    //khai báo biến
    int score1, score2, score3;// 3 cột điểm 
    double average;//điểm tủng bình
    char again;
    do
    {
        // nhập 3 lần điểm theo thứ tự
        cout << "Enter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3;
        // tính điểm trung bình và xuát ra màn hình
        average = (score1 + score2 + score3) / 3.0;//ép kiểu cho biến average
        cout << "The average is " << average << ".\n";
        // hỏi người dùng có muốn tính bộ điểm khác ko?
        cout << "Do you want to average another set? (Y/N) ";
        cin >> again;//nhập kí tự Y/y = yes và N=no
    } while (again == 'Y' || again == 'y'); //điều kiện quay lại vòng lặp
    return 0;
}