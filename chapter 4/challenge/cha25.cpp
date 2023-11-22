#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    const double PACKAGE_A_PRICE = 39.99,//giá gói A
                 PACKAGE_B_PRICE = 59.99,//giá gói B
                 PACKAGE_C_PRICE = 69.99,//giá gói C
                 PACKAGE_A_MINUTES = 450,//số phút của gói A
                 PACKAGE_B_MINUTES = 900,//số phút của gói B
                 PACKAGE_A_ADDITIONAL_CHARGES = 0.45,//số tiền bổ sung mỗi phút của gói A
                 PACKAGE_B_ADDITIONAL_CHARGES = 0.40;//số tiền bổ sung mỗi phút của gói B
    char menu_choice;//lựa chọn menu
    //hiển thị menu và nhập lựa chọn
    cout << "\nPackage A: For $39.99 per month 450\nminutes are provided.\n--Additional minutes are $0.45 per minute.\n"
         << "Package B: For $59.99 per month 900\nminutes are provided.\n--Additional minutes are $0.40 per minute.\n"
         << "Package C: For $69.99 per month unlimited\nminutes provided.\n" ;
    cout << "Choose package: ";
    cin >> menu_choice;//nhập lựa chọn
    switch (menu_choice)
    {
        int mins_used;//khai báo biến só phút sử dụng
        float total_charges;//khai báo biến tổng tiền dịch vụ phải trả
        //các trường hợp nhập đúng lựa chọn menu
        case 'a':
        case 'A':
        case 'B':
        case 'b':
        case 'c':
        case 'C':
            cout << "How many minutes used? ";
            cin >> mins_used;//nhập số phút đã sử dụng
            if (mins_used < 0)//xác thực đầu vào số phút đã sử dụng
                cout << "We're sorry. Minutes must be greater than 0.\n" << "Rerun the program and try again.\n";//báo lỗi
            else
            {
                cout << "Total monthly charges: ";
                //xác định tiền phí dịch vụ mỗi tháng và hiển thị ra màn hình
                if (menu_choice == 'a' ||  menu_choice == 'A') 
                {
                    total_charges = mins_used > PACKAGE_A_MINUTES 
                    ? PACKAGE_A_PRICE + ((mins_used - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_CHARGES) 
                    : PACKAGE_A_PRICE;
                }
                else if(menu_choice == 'b' ||  menu_choice == 'B') 
                {
                    total_charges = mins_used > PACKAGE_B_MINUTES 
                    ? PACKAGE_B_PRICE + ((mins_used - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_CHARGES) 
                    : PACKAGE_B_PRICE;
                }
                else if (menu_choice == 'c' ||  menu_choice == 'C') 
                {
                    total_charges = PACKAGE_C_PRICE;
                }
                cout << total_charges << endl;
            }
            break;
        default://xác thực đầu vào lựa chọn
            cout << "We're sorry. Menu choice must be A, B, or C.\n" << "Rerun the program and try again." ;//báo lỗi
             break;
    }
    return 0;
}