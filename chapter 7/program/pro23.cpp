 #include <iostream>
 using namespace std;
 bool testPIN(const int [], const int [], int);//khoi tao ham bool testPIN voi hai mang nguyen va bien nguyen

 int main (){
    const int NUM_DIGITS = 7;//khai bao hang chua so phan tu cua mang
    int pin1[NUM_DIGITS] = {2, 4, 1, 8, 7, 9, 0};//khai bao mang nguyen pin1 va gan cac gia tri
    int pin2[NUM_DIGITS] = {2, 4, 6, 8, 7, 9, 0}; //khai bao mang nguyen pin2 va gan cac gia tri chi khac mot phan tu so boi pin1
    int pin3[NUM_DIGITS] = {1, 2, 3, 4, 5, 6, 7};//khai bao mang nguyen pin3 va gan cac gia tri khac hoan toan so voi pin1
    if (testPIN(pin1, pin2, NUM_DIGITS))//neu ham testPIN truyen vao cac gia tri pin1, pin2 va NUM_DIGITS la true thi xuat ra man hinh
        cout << "ERROR: pin1 and pin2 report to be the same.\n";
    else//neu khong thi xuat ra man hinh
        cout << "SUCCESS: pin1 and pin2 are different.\n";
    if (testPIN(pin1, pin3, NUM_DIGITS))//neu ham testPIN truyen vao cac gia tri pin1, pin3 va NUM_DIGITS la true thi xuat ra man hinh
        cout << "ERROR: pin1 and pin3 report to be the same.\n";
    else//neu khong thi xuat ra man hinh
        cout << "SUCCESS: pin1 and pin3 are different.\n";
    if (testPIN(pin1, pin1, NUM_DIGITS))//neu ham testPIN truyen vao cac gia tri pin1, pin3 va NUM_DIGITS la true thi xuat ra man hinh
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else//neu khong thi xuat ra man hinh
        cout << "ERROR: pin1 and pin1 report to be different.\n";
    return 0;
    }
bool testPIN(const int custPIN[], const int databasePIN[], int size){//khoi tao ham bool voi mang custPIN, databasePIN va bien nguyen size
    for (int index = 0; index < size; index++){
    if (custPIN[index] != databasePIN[index])//neu bieu thuc trong gnosc dung thi return false
    return false;
    }
    return true;//khong thi return true
}