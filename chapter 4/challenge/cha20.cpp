#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến hằng các tỉ suất chênh lệch trong các môi trường
    const int AIR_FEET_PER_SECOND = 1100,
              WATER_FEET_PER_SECOND = 4900,
              STEEL_FEET_PER_SECOND = 16400,
              MINIMUM_DISTANCE = 0;
    int user_menu_choice;//biến lựa chọn
    float length_of_travel,//quãng đường truyền âm
          amount_of_time;//thời gian truyền âm
    //hiển thị menu
    cout << "    Choose one:    " << endl;
    cout << "    1. Air         " << endl;
    cout << "    2. Water       " << endl;
    cout << "    3. Steel       " << endl;
    cin >> user_menu_choice;//nhập lựa chọn
    switch (user_menu_choice)
    {
        //các lựa chọn 1-2-3 thực thi 
        case 1:
        case 2:
        case 3:
            cout << "\nHow far will the sound wave travel? ";
            cin >>  length_of_travel;//nhập quãng đường truyền âm
            if (length_of_travel < MINIMUM_DISTANCE)//xác thực đầu vào quãng đường
            {
                //báo lỗi
                cout << "\nError. Distance must be more than 0.\n";
                cout << "Rerun the program and try again.\n" << endl;
            }
            else
            {
                // lựa chọn có hiệu lực
                // thực thi tính thời gian truyền âm của lựa chọn
                if (user_menu_choice == 1)
                {
                    amount_of_time = length_of_travel /  AIR_FEET_PER_SECOND;
                    cout << "In air ";
                }
                else if (user_menu_choice == 2)
                {
                    amount_of_time = length_of_travel /  WATER_FEET_PER_SECOND;
                    cout << "In water ";
                }
                else if (user_menu_choice == 3)
                {
                    amount_of_time = length_of_travel / STEEL_FEET_PER_SECOND;
                    cout << "In steel ";
                }
                cout << setprecision(4) << fixed;//formatting
                cout << "the sound wave will take " << amount_of_time << " seconds to travel." << endl ;//hiển thị thời gian ra màn hình
            }
            break;
    
        default://báo lỗi lựa chọn . xác thực đầu vào lựa chọn
            cout << "\nWe're sorry. Choose a number between 1 and 3. Rerun the program and try again.\n";
            break;
    }
    return 0;
}