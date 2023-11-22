#include <iostream>
using namespace std;
int main()
{
    const double MAX_TEMP = 102.5;// biến nhiệt độ ớn nhất
    double temperature;//biến nhiệt độ
    // nhập nhiệt độ hiện tại
    cout << "Enter the substance's Celsius temperature: ";
    cin >> temperature;
    // bộ điều chỉnh nhiệt độ
    while (temperature > MAX_TEMP)//kiểm tra điều kiện
    {
        //nhắc nhờ người dùng về nhiệt độ
        cout << "The temperature is too high. Turn the\n";
        cout << "thermostat down and wait 5 minutes.\n";
        cout << "Then take the Celsius temperature again\n";
        cout << "and enter it here: ";
        cin >> temperature;//nhập lại nhiệt độ
        //sau đó kiểm tra lại điều kiện tiếp
    }
    cout << "The temperature is acceptable.\n";
    cout << "Check it again in 15 minutes.\n";
    return 0;
}