#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    char user_selection;//lựa chọn của người dùng
    int travel_time;//thơi gian truyền
    //hiển thị menu
    cout << "    Medium               " << endl;
    cout << "    A. Carbon Dioxide    " << endl;
    cout << "    B. Air               " << endl;
    cout << "    C. Helium            " << endl;
    cout << "    D. Hydrogen          " << endl;
    cin >> user_selection;//nhập lựa chọn
    switch (user_selection)
    {
        //các lựa chọn hợp lệ 
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
            cout << "\nEnter number of seconds it took for the sound to travel. ";
            cin >> travel_time;//nhập thời gian truyền

            if (travel_time < 0 || travel_time > 30)//xác thực đầu vào thời gian truyền
            {
                //báo lỗi
                cout << "\nWe're sorry. Number of seconds must be within 0 and 30 seconds.\n" ;
            }
            else//thời gian truyền hợp lệ
            {
                //dựa vào lựa chọn của người dùng
                //xác định thời gian truyền qua các môi trường
                if (user_selection == 'a' || user_selection == 'A')
                {
                    travel_time *= 258.0;
                    cout << "Carbon Dioxide ";
                }
                else if (user_selection == 'b' || user_selection == 'B')
                {
                    travel_time *= 331.5;
                    cout << "Air ";
                }
                else if (user_selection == 'c' || user_selection == 'C')
                {
                    travel_time *= 972.0;
                    cout << "Helium ";
                }
                else if (user_selection == 'd' || user_selection == 'D')
                {
                    travel_time *= 1270.0;
                    cout << "Hydrogen ";
                }
                cout << "the source \nof sound is " << travel_time << " meters away.\n" ;//hiển thị kết quả
            }
            break;
        default://xác thực đầu vào của lựa chọn
            //báo lỗi ko hợp lệ lựa chọn
            cout << "\nWe're sorry. A letter between A and D must be\n chosen. Rerun the program dn try again.\n" ;
            break;
    }
    return 0;
}