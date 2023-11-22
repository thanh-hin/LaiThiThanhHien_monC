#include <bits/stdc++.h>
using namespace std;

// khai báo biến hằng
const int ROCK = 1,
          PAPER = 2,
          SCISSORS = 3;

// khai báo hàm
int inputValidate(int);
int computerChoice(int);
int getUserChoice(int);
void displayRandomNumber(int);
void winnerSelection(int, int, bool &);

int main()//hàm chính
{
    //khai báo biến
    int computer_choice,//lựa chọn của máy tính
        user_number;//lựa chọn của người dùng
    bool play_again;
    do
    {
        computer_choice = computerChoice(computer_choice);//gọi hàm computerChoice và lưu trữ lựa chọn của máy tính
        user_number = getUserChoice(user_number);//gọi hàm getUserChoice để nhạp lựa chọn của người dùng
        //gọi hàm displayRandomNumber và winnerSelection
        displayRandomNumber(computer_choice);
        winnerSelection(computer_choice, user_number, play_again);
    } while (play_again == 1);//điều kiện chạy vòng lặp để người dùng chơi lại lần nữa
    return 0;
} 

//hàm tạo số ngẫu nhiên từ máy tính
int computerChoice(int computer_choice)//định nghĩa hàm
{
    // Lấy thời gian của hệ thống
    unsigned seed = time(0);
    // Seed trình tạo số ngẫu nhiên
    srand(seed);
    // tạo số ngẫu nhiên
    return (rand() % (SCISSORS - ROCK + 1)) + ROCK;//trả giá trị số ngẫu nhiên
}

//hàm nhập lựa chọn của người dùng
int getUserChoice(int user_number)//định nghĩa hàm
{
    cout << "\nChoose 'rock', 'paper', or 'scissors'.\n"<< "(1) for rock, (2) for paper, or (3) for scissors: ";    
    user_number = inputValidate(user_number);//nhập lựa chọn bằng gọi hàm inputValidate
    return user_number;//trả về giá trị user_number
}

//hàm xác thực đầu vào
int inputValidate(int num1)//định nghĩa hàm
{
    while (!(cin >> num1) || (num1 < 1 || num1 > 3))
    {
        //báo lỗi và nhập lại
        cout << "Error. Number must not be 0 or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num1;//trả về giá trị num1
}

//hàm hiển thị lựa chọn của máy tính (từ số sang thành các option)
void displayRandomNumber(int computer_choice)//định nghĩa hàm
{
    cout << "\nComputer Choice = ";
    //xác định số ngẫu nhiên từ máy tính 
    if (computer_choice == 1)//trường hợp = 1 là búa
        cout << "Rock";
    else if (computer_choice == 2)//trường hợp = 2 là giấy
        cout << "Paper";
    else if (computer_choice == 3)//trường hợp = 3 là kéo
        cout << "Scissors";
}

//hàm xác định thắng thua giữa người chơi và máy tính
void winnerSelection(int computer_choice, int user_number, bool &play_again)//định nghĩa hàm
{
    //trường hợp lựa chọn của máy là búa
    if (computer_choice == ROCK)
    {
        if (user_number == PAPER)//lựa chọn của người dùng là giấy thì hiển thị người dùng thắng
        {
            cout << "You win: (Paper covers rock).\n";
            play_again = 0;
        }
        else if (user_number == SCISSORS)//lựa chọn của người dùng là kéo thì hiển thị máy thắng
        {
            cout << "Computer wins: (Rock smashes scissors).\n";
            play_again = 0;
        }
        else if (user_number == ROCK)//lựa chọn của người dùng là búa thì hiển thị hòa
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
    }
    //trường hợp lựa chọn của máy là giấy
    else if (computer_choice == PAPER)
    {
        if (user_number == ROCK)//lựa chọn của người dùng là búa thì hiển thị máy thắng
        {
            cout << "Computer wins: (Paper covers rock).\n";
            play_again = 0;
        }
        else if (user_number == SCISSORS)//lựa chọn của người dùng là kéo thì hiển thị người dùng thắng
        {
            cout << "You win: (Scissors cuts paper).\n";
            play_again = 0;
        }
        else if (user_number == PAPER)//lựa chọn của người dùng là giấy thì hiển thị hòa
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
    }
    //trường hợp lựa chọn của máy là kéo
    else if (computer_choice == SCISSORS)
    {
        if (user_number == ROCK)//lựa chọn người dùng là búa thì hiển thị người dùng thắng
        {
            cout << "You win: (Rock smashes scissors).\n";
            play_again = 0;
        }
        else if (user_number == PAPER)//lựa chọn của người dùng là giấy thì hiển thị máy thắng
        {
            cout << "Computer wins: (Scissors cuts paper).\n";
            play_again = 0;
        }
        else if (user_number == SCISSORS)//lựa chọn của người dùng là kéo thì hiển thị hòa
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
    }
}