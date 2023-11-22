#include <iostream>
#include <cstdlib>
#include "IntegerList.h"
using namespace std;
IntegerList::IntegerList(int size)
{
    list = new int[size];
    numElements = size;
    for (int ndx = 0; ndx < size; ndx++)
    list[ndx] = 0;
}
bool IntegerList::isValid(int element) const
{
    bool status;
    if (element < 0 || element >= numElements)
        status = false;
    else
        status = true;
    return status;
}
void IntegerList::setElement(int element, int value)
{
    if (isValid(element))
        list[element] = value;
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}
int IntegerList::getElement(int element) const
{
    if (isValid(element))
        return list[element];
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}