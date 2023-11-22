#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    //khai báo biến
    const float PACKAGE_A_CHARGES = 39.99,//giá tiền gói A
                PACKAGE_B_CHARGES = 59.99,//giá tiền gói B
                PACKAGE_C_CHARGES = 69.99,//giá tiền gói C
                PACKAGE_A_ADDITIONAL_CHARGES = 0.45,//số tiền bổ sung của gói A mỗi phút
                PACKAGE_B_ADDITIONAL_CHARGES = 0.40,//số tiền bổ sung của gói B mỗi phút
                PACKAGE_A_MINUTES = 450,//số phút của gói A
                PACKAGE_B_MINUTES = 900,//số phút của gói B
                _30_DAYS   = 30,// 30 ngày
                _31_DAYS   = 31,//31 ngày
                _28_DAYS   = 28, //28 ngày 
                NUM_MINS_IN_28_DAYS = 672 * 60,//số phút tối thiểu trọng 28 ngày
                NUM_MINS_IN_30_DAYS = 720 * 60,//số phút tối thiểu trong 30 ngày
                NUM_MINS_IN_31_DAYS = 744 * 60;//số phút tối thiểu trong 31 ngày
    char menu_choice;//lựa chọn menu
    int month;//tháng
    //hiển thị menu
    cout << "\nPackage A: For $39.99 per month 450 minutes are provided.\n --Additional minutes are $0.45 per minute." 
         << "Package B: For $59.99 per month 900 minutes are provided.\n --Additional minutes are $0.40 per minute." 
         << "Package C: For $69.99 per month unlimited\n minutes provided.\n" ;
    cout << "Choose package: ";
    cin >> menu_choice;//nhập lựa chọn
    switch (menu_choice)
    {
        int counter;//biến đếm
        float total_charges_A,//tổng phí của gói A
              total_charges_B,//tổng phí của gói B
              total_charges_C;//tổng phí của gói C
        //các lựa chọn trong menu được nhập đúng
        case 'a':
        case 'A':
        case 'B':
        case 'b':
        case 'c':
        case 'C':
            cout << "Choose a month (use numbers)\n" << " E.g. 12 = December, 3 = March:" << endl;
            cin >> month;//nhập tháng 
            //lệnh switch để tìm ra số ngày của tháng đó
            switch (month)
            {
                //tháng 1, 3, 5, 7, 8, 10, 12 có 31 ngày
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    counter = _31_DAYS;
                    break;
                //tháng 4, 6, 9, 11 có 30 ngày
                case 4:
                case 6:
                case 9:
                case 11:
                    counter = _30_DAYS;
                    break;
                case 2://tháng 2 có 28 ngày
                    counter = _28_DAYS;
                    break;
                default://xác thực đầu vào biến tháng
                    cout << "Invalid month. Rerun program.\nTry again.\n"; //báo lỗi
                    break;
            }
            if (counter >= _28_DAYS && counter <= _31_DAYS)
            {
                int minutes_used;//biến số phút đã sử dụng
                cout << "How many minutes used? ";
                cin >> minutes_used;//nhập số phút đã sử dụng
                if (minutes_used < 0)//xác thực đầu vào số phút đã sử dụng
                    cout << "We're sorry. Minutes must be greater than 0.\nRerun the program and try again.\n" ;//báo lỗi
                else//số phút sử dụng được accept
                {
                    //xác thực đầu vào số phút đã sử dụng phải lớn hơn số phút tối thiểu của tháng đó
                    if (counter == _31_DAYS && minutes_used > NUM_MINS_IN_31_DAYS) 
                        cout << "We're sorry. Minutes must be " << NUM_MINS_IN_31_DAYS << " or less.\nRerun the program and try again.\n"; 
                    else if (counter == _30_DAYS && minutes_used > NUM_MINS_IN_30_DAYS)
                        cout << "We're sorry. Minutes must be " << NUM_MINS_IN_30_DAYS <<"or less.\nRerun the program and try again.\n";
                    else if (counter == _28_DAYS && minutes_used > NUM_MINS_IN_28_DAYS)
                        cout << "We're sorry. Minutes must be "<< NUM_MINS_IN_28_DAYS << " or less.\nRerun the program and try again.\n" ;
                    else//số phút sử dụng được accept
                    {
                        cout << setprecision(2) << fixed;//formatting
                        //xác định khoảng chi phí của mỗi gói cước
                        total_charges_A = minutes_used > PACKAGE_A_MINUTES 
                        ? PACKAGE_A_CHARGES + ((minutes_used - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_CHARGES)
                        : PACKAGE_A_CHARGES;
                        
                        total_charges_B = minutes_used > PACKAGE_B_MINUTES 
                        ? PACKAGE_B_CHARGES + ((minutes_used - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_CHARGES)
                        : PACKAGE_B_CHARGES;    
                        total_charges_C = PACKAGE_C_CHARGES;
                        if (menu_choice == 'a' || menu_choice == 'A')//xác định lựa chọn trong menu 
                        {
                            cout << "Package A monthly charges: $" << total_charges_A ;//hiển thị tổng phí mỗi tháng của gói A
                            if (total_charges_A > total_charges_B)
                            {
                                //hiển thị các gói tiết kiệm hơn
                                cout << "You could have saved $" << total_charges_A - total_charges_B << " with Package B.\n" 
                                     << "You could have saved $" << total_charges_A - total_charges_C << " with Package C.\n" ;
                            }
                        }
                        else if (menu_choice == 'b' || menu_choice == 'B')//xác định lựa chọn trong menu 
                        {
                            cout << "Package B monthly charges: $"  << total_charges_B << endl;//hiển thị tổng phí của gói B
                            if (total_charges_B > total_charges_C)//xác định gói tiết kiệm hơn
                                cout << "You could have saved $" << total_charges_B - total_charges_C << " with Package C.\n";
                        }
                        else if (menu_choice == 'c' || menu_choice == 'C')//xác định lựa chọn trong menu 
                            cout << "Package C monthly charges: $" << total_charges_C << endl;//hiển thị tổng phí của gói C, gói tối ưu nhất nên ko so sánh
                    }  
                }
            }
            break;
        default://xác thực đầu vào lựa chọn của người dùng
            cout << "We're sorry. Menu choice must be A, B, or C.\n Rerun the program and try again.\n" ;//báo lỗi
            break;
    }
    return 0;
}