#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    float starting_time;//khai báo biến thời gian bắt đầu
    cout << "\nWhat is the starting time? (HH.MM) \ne.g. 07.46 is 7 hours and 46 minutes: ";
    cin >> starting_time;//nhập thời gian bắt đầu
    if (starting_time > 23.59)//xác thực đầu vào thời gian bắt đầu
        cout << "We're sorry, time must not exceed 23.59.\nRerun the program and try again." << endl;//báo lỗi 
    else 
    {
        if ((starting_time - static_cast<int>(starting_time)) > 0.59)//xác thực đầu vào 2 chữ số cuối
            cout << "We're sorry, the last two digits must NOT be\n greater than 59. Rerun the program and\n try again.\n";//báo lỗi
        else
        {
            float num_mins;//khai báo biến thời gian cuộc gọi
            cout << "How long did the call last? (HH.MM): ";
            cin >> num_mins;//nhập thời gian của cuộc gọi
            if((num_mins - static_cast<int>(num_mins)) > 0.59)//xác thực đâu fvaof â số cuối
                cout << "We're sorry, the last two digits must NOT be\ngreater than 59. Rerun the program and try again.\n";//báo lỗi
            else
            {
                float total_charges;//khai báo biến tổng chi phí
                cout << setprecision(2) << fixed;//formatting
                cout << "Total charges = $";
                //xác định tổng số tiền dịch vụ và hiển thị ra màn hình
                if (starting_time >= 00.00 &&  starting_time <= 06.59)
                {
                    total_charges = num_mins * 0.05;
                    cout << total_charges << endl;
                }
                else if (starting_time >= 07.00 &&  starting_time <= 19.00)
                {
                    total_charges = num_mins * 0.45;
                    cout << total_charges << endl;
                }
                else if (starting_time >= 19.01 &&  starting_time <= 23.59)
                {
                    total_charges = num_mins * 0.20;
                    cout << total_charges << endl;
                }
            }
        }
    }
    return 0;
}