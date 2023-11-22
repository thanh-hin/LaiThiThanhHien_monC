#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//khai bao ham arrayToFIle, fileToArray
void arrayToFile(string, int *, int);
void fileToArray(string, int *, int);

int main()
{
    //khai bao hang nguyen
    const int ARRAY_SIZE = 5;
    //khai bao mang nguyen arrayToWrite gom cac phan tu
    int arrayToWrite[ARRAY_SIZE] = {1, 172, 3, 4, 5};
    //khia bao mang nguyen arrayFromFile
    int arrayFromFile[ARRAY_SIZE];
    cout << "Now writing into file...\n";
    //goi ham arrayToFile truyen vao do cac gia tri 
    arrayToFile("array.dat", arrayToWrite, sizeof(arrayToWrite));
    cout << "Done!\n";
    cout << "Now reading from file...\n";
    //goi ham afileToArray truyen vao do cac gia tri
    fileToArray("array.dat", arrayFromFile, sizeof(arrayFromFile));
    cout << "Done!\n\n";
    cout << "This is what we read from the file:\n";
    //khoi tao vong lap for de duyet cac gia tri cua mang arrayFromFile
    for(int counter = 0; counter < ARRAY_SIZE; counter++)
        cout << arrayFromFile[counter] << ", ";
    return 0;
}
//khai bao ham arrayToFile gom cac gia tri bien xau ky tu fileName, bien nguyen inputArray, bien nguyen arraySize
void arrayToFile(string fileName, int *inputArray, int arrSize){
    //mo file duoi dang nhi phan
    ofstream outputFile(fileName, ios::binary);
    //viet vao file
    outputFile.write(reinterpret_cast<char  *>(inputArray), arrSize);
    //close file
    outputFile.close();
}
//khai bao ham fileToArray cac gia tri bien xau ky tu fileName, bien nguyen outputArray, bien nguyen arraySize
void fileToArray(string fileName, int *outputArray, int arrSize){
    //mo tap tin duoi dang nhi phan
    ifstream inputFile(fileName, ios::binary);
    //doc tu file
    inputFile.read(reinterpret_cast<char *>(outputArray), arrSize);
    //dong file
    inputFile.close();
}