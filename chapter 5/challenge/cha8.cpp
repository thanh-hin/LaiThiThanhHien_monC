#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int MIN_NUM = 0,//số bé nhất
              MAX_NUM = 999,//số lớn nhất
             //biến lựa chọn trong menu
              ADDITION = 1,
              SUBTRACTION = 2,
              MULTIPLICATION = 3,
              DIVISION = 4,
              QUIT_CHOICE = 5;
    int user_answer,//câu trả lời của người dùng
        rand_num_1,//số 1
        rand_num_2,//số 2
        rand_num_answer,//câu tả lời của máy
        menu_selection;//menu lựa chọn
    //tạo bộ biến số ngẫu nhiên
    unsigned seed = time(0);
    srand(seed);
    do
    {
        rand_num_1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;//tạo số ngẫu nhiên
        rand_num_2 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;//tạo số ngẫu nhiên
        //hiển thị menu
        cout << "\nWhat type of math problem would\n"<< "you like to solve? \n";
        cout << "1. Addition"       << endl;
        cout << "2. Subtraction"    << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division"       << endl;
        cout << "5. Quit Program ";

        while(!(cin >> menu_selection)  ||menu_selection < ADDITION || menu_selection > QUIT_CHOICE)
        {
            //báo lỗi lựa chọn ko có trong menu
            cout << "\nInvalid selection. Please enter\n"
                 << "a valid selection: \n";
            cin.clear();
            cin.ignore(1200, '\n');
        }

        if (menu_selection != QUIT_CHOICE) //lựa chọn khác 5
        {
            switch (menu_selection)
            {
                case 1://thực hiện phép cộng
                    cout << rand_num_1 << " + " 
                         << rand_num_2 << " = ";
                    rand_num_answer = rand_num_1 + 
                                      rand_num_2;
                    while(!(cin >> user_answer))
                    {
                        cout << "Error. Number must be "
                             << "chosen.";
                        cin.clear();
                        cin.ignore(1200, '\n');
                    }
                    break;
                case 2://hiển thị phép trừ
                    cout << rand_num_1 << " - " 
                         << rand_num_2 << " = ";
                    rand_num_answer = rand_num_1 - 
                                      rand_num_2;
                    while(!(cin >> user_answer))
                    {
                        cout << "Error. Number must be "
                             << "chosen.";
                        cin.clear();
                        cin.ignore(1200, '\n');
                    }
                    break;
                case 3://hiển thị phép nhân
                    cout << rand_num_1 << " x " 
                         << rand_num_2 << " = ";
                    rand_num_answer = rand_num_1 * 
                                      rand_num_2;
                    while(!(cin >> user_answer))
                    {
                        cout << "Error. Number must be "
                             << "chosen.";
                        cin.clear();
                        cin.ignore(1200, '\n');
                    }
                    break;
                case 4://hiển thị phép chia
                    cout << rand_num_1 << " / " 
                         << rand_num_2 << " = ";
                    rand_num_answer = rand_num_1 / 
                                      rand_num_2;
                    while(!(cin >> user_answer))
                    {
                        cout << "Error. Number must be "
                             << "chosen.";
                        cin.clear();
                        cin.ignore(1200, '\n');
                    }
                    break;
            }
            //chúc mừng nếu câu trả lời đúng và ngược lại
            if (user_answer == rand_num_answer) 
            {
                cout << "\nCongratulations!" <<"\n";
            }
            else if(user_answer != rand_num_answer) 
            {
                cout << "\nOops. Correct answer here: " 
                     << rand_num_answer << endl;
            }
        }
        else// lựa chon  thì dừng 
            cout << "Program ending." << endl;
    } while (menu_selection != QUIT_CHOICE);
    return 0;
}