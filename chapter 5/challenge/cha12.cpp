#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float F = 0;//khai báo
    cout << "Celsius\t\tFahrenheit" << endl;
    cout << setprecision(1) << fixed << right;//formatting
    for (int C = 0; C <= 20; C++)
    {
        // tính độ F
        F = ((9.0 / 5) * C) + 32;
        cout << setw(2) << C << "\t\t" << F << endl;//formatting
    }
    return 0;
}