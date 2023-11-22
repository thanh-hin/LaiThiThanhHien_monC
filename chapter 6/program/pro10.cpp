#include <bits/stdc++.h>
using namespace std;

//khai báo các hàm
void showMenu();
void showFees(double, int);

int main()//hàm chính
{
    int choice;//biến giữ sựa lựa chọn
    int months;
    // khai báo hằng số các lựa chọn trong menu
    const int ADULT_CHOICE = 1,
            CHILD_CHOICE = 2,
            SENIOR_CHOICE = 3,
            QUIT_CHOICE = 4;
    // khai báo biến tỷ lệ thành viên
    const double ADULT = 40.0,
                CHILD = 20.0,
                SENIOR = 30.0;
    cout << fixed << showpoint << setprecision(2);//formatting
    do
    {
        //hiển thị menu và nhập lựa chọn của người dùng
        showMenu();//gọi hàm showMenu
        cin >> choice;
        // xác thực lựa chọn trong menu
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            //báo lỗi nếu người dùng nhập khác các lựa chọn trong menu
            //và yêu cầu nhập lại
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }
        // Nếu người dùng không muốn thoát, hãy tiếp tục
        if (choice != QUIT_CHOICE)
        {
            // nhập số lượng các tháng
            cout << "For how many months? ";
            cin >> months;
            // hiển thị phí thành viên
            switch (choice)
            {
                case ADULT_CHOICE:
                    showFees(ADULT, months);//gọi hàm showFees truyền đối số ADULT và months
                    break;//break để thoát lệnh 
                case CHILD_CHOICE:
                    showFees(CHILD, months);//gọi hàm showFees truyền đối số CHILD và months
                    break;
                case SENIOR_CHOICE:
                    showFees(SENIOR, months);//gọi hàm showFees truyền đối số SENIOR và months
            }
        }
    } while (choice != QUIT_CHOICE);//điều kiện chạy vòng do là biến choice phải khác 4
    return 0;
}

//hàm hiển thị menu
void showMenu()//định nghĩa hàm showMenu
{
    //hiển thị menu
    cout << "\n\t\tHealth Club Membership Menu\n\n"
        << "1. Standard Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
}

//hàm tính phí thành viên
void showFees(double memberRate, int months)//định nghĩa hàm showFees
{
    //hiển thị phí thành viên
    cout << "The total charges are $"
         << (memberRate * months) << endl;
}