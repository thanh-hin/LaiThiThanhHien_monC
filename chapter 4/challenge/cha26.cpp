#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    const float PACKAGE_A_CHARGES = 39.99,//giá tiền gói A
                PACKAGE_B_CHARGES = 59.99,//giá tiền gói B
                PACKAGE_C_CHARGES = 69.99,//giá tiền gói C
                PACKAGE_A_MINUTES = 450,//số phút của gói A
                PACKAGE_B_MINUTES = 900,//số phút của gói B
                PACKAGE_A_ADDITIONAL_CHARGES = 0.45,//số tiền bổ sung của gói A mỗi phút
                PACKAGE_B_ADDITIONAL_CHARGES =0.40;//số tiền bổ sung của gói B mỗi phút
    char menu_choice;//biến lựa chọn menu
    //hiển thị menu
    cout << "\nPackage A: For $39.99 per month 450 minutes are provided.\n--Additional minutes are $0.45 per minute.\n" 
         << "Package B: For $59.99 per month 900 minutes are provided.\n --Additional minutes are $0.40 per minute.\n" 
         << "Package C: For $69.99 per month unlimited\nminutes provided.\n" ;
    cout << "Choose package: ";
    cin >> menu_choice;//nhập lựa chọn
    switch (menu_choice)
    {
        int minutes_used;//biến số phút đã sử dụng
        float total_charges_A,//tổng phí trả cho gói A
              total_charges_B,//tổng phí trả cho gói B
              total_charges_C;//tổng phí trả cho gói C
        //các lựa chọn menu được nhập đúng
        case 'a':
        case 'A':
        case 'B':
        case 'b':
        case 'c':
        case 'C':
            cout << "How many minutes used? ";
            cin >> minutes_used;//nhập số phút đã sử dụng
            if (minutes_used < 0)//xác thực đầu vào số phút sử dụng
                cout << "We're sorry. Minutes must be greater than 0.\nRerun the program and try again." << endl;//báo lỗi
            else
            {
                double could_have_saved;//biên tiết kiệm
                //xác định khoảng chi phí của mỗi gói cước
                total_charges_A = minutes_used > PACKAGE_A_MINUTES 
                ? PACKAGE_A_CHARGES + ((minutes_used - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_CHARGES) 
                : PACKAGE_A_CHARGES;

                total_charges_B = minutes_used > PACKAGE_B_MINUTES 
                ? PACKAGE_B_CHARGES + ((minutes_used - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_CHARGES) 
                : PACKAGE_B_CHARGES;

                total_charges_C = PACKAGE_C_CHARGES;
                cout << setprecision(2) << fixed;//formatting
                //xác định tiền phí dịch vụ mỗi tháng
                //xác định gói nào tiết kiệm hơn và tiết kiệm được bao nhiêu
                if (menu_choice == 'a' || menu_choice == 'A')
                {
                    cout << "Package A monthly charges: $" << total_charges_A << endl;
                    if (total_charges_A > total_charges_B)
                    {
                        could_have_saved = total_charges_A - total_charges_B;
                        cout << "You could have saved $"  << could_have_saved << " with Package B." << endl;
                        could_have_saved = total_charges_A - total_charges_C;
                        cout << "You could have saved $" << could_have_saved<< " with Package C." << endl;
                    }
                }
                else if(menu_choice == 'b' || menu_choice == 'B') 
                {
                    cout << "Package B monthly charges: $" << total_charges_B << endl;
                    if (total_charges_B > total_charges_C)
                    {
                        could_have_saved = total_charges_B - total_charges_C;
                        cout << "You could have saved $" << could_have_saved<< " with Package C." << endl;
                    }
                }
                else if (menu_choice == 'c' || menu_choice == 'C') 
                    cout << "Package C monthly charges: $" << total_charges_C << endl;
            }
            break;
        default://xác thực đầu vào lựa chọn menu
            cout << "We're sorry. Menu choice must be A, B, or C.\nRerun the program and try again." << endl;
            break;
    }
    return 0;
}