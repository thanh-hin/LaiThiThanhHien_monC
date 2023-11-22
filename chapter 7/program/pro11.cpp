#include <bits/stdc++.h>
using namespace std;
int main()
{
    //khoi tao mang xau ky tu planets gom cac phan tu duoc gan gia tri theo thu tu
    string planets[] = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto (a dwarf planet)" };
    cout << "Here are the planets:\n";
    for (string val : planets)//khoi tao vong lap xuat ra gai tri cua ac phan tu trong man
    cout << val << endl;//xuat ra gia tri cua phan tu val
    return 0;
}