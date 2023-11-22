#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //hằng số cho menu lựa chọn
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;
    //Hằng số cho tỷ lệ thành viên
    const double ADULT = 40.0,
                CHILD = 20.0,
                SENIOR = 30.0;
    int choice;//menu lựa chọn
    int months;//số tháng
    double charges; //phí hàng tháng
    cout << fixed << showpoint << setprecision(2);//formatting
    do
    {
        // hiển thị menu
        cout << "\n\t\tHealth Club Membership Menu\n\n"
             << "1. Standard Adult Membership\n"
             << "2. Child Membership\n"
             << "3. Senior Citizen Membership\n"
             << "4. Quit the Program\n\n"
             << "Enter your choice: ";
        cin >> choice;
        // Xác thực lựa chọn menu
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }   
        // xử lí lựa chọn 
        if (choice != QUIT_CHOICE)//choice khác 4
        {
            // nhập số tháng
            cout << "For how many months? ";
            cin >> months;
            // phản hồi lại lựa chọn của người dùng
            switch (choice)
            {
                case ADULT_CHOICE://case 1
                charges = months * ADULT;
                break;
                case CHILD_CHOICE://case 2
                charges = months * CHILD;
                break;
                case SENIOR_CHOICE://case 3
                charges = months * SENIOR;
            }
            // hiển thị ra phí hàng tháng
            cout << "The total charges are $"
                 << charges << endl;
        }
    } while (choice != QUIT_CHOICE);
    return 0; 
}