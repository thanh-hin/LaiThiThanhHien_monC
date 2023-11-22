#ifndef INTEGERLIST_H
#define INTEGERLIST_H
class IntegerList
{
    private:
        int *list;
        int numElements;
        bool isValid(int);
    public:
        IntegerList(int);
        ~IntegerList();
        void setElement(int, int); 
        void getElement(int, int&); 
};
#endif