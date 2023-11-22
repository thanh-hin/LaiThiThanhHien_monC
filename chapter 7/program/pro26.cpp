#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers(5);//khai bao vector nguyen gom 5 phan tu
    for (int &val : numbers){//duyet vong lpa nhap vao cac phan tu cua vector numbers
    cout << "Enter an integer value: ";
    cin >> val;
    }
    cout << "Here are the values you entered:\n";
    for (int val : numbers)//duyet vong lap xuat ra cac phan tu cua vector numbers
    cout << val << endl;
    return 0;
}