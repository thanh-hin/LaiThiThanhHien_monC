#include <iostream>
#include <string>
using namespace std;

//khai bao struct MovieData
struct MovieData{
    string title;
    string director;
    int releaseYear;
    int runningTime;
};
//khai bao ham printInfo
void printInfo(const MovieData &);
int main()
{
    //dinh nghia hai ban ghi movie1 va movie2
    MovieData movie1 = {"ABC", "John Smith", 2000, 120};
    MovieData movie2;
    cout << "Enter data for second struct\n";
    cout << "Movie Title: ";
    //nhap vao cac thanh vien cua movie2
    getline(cin, movie2.title);
    cout << "Director: ";
    getline(cin, movie2.director);
    cout << "Release Year: ";
    cin >> movie2.releaseYear;
    cout << "Running time: ";
    cin >> movie2.runningTime;
    cout << "\nNow displaying data from first movie\n";
    //goi ham printInfo truyen vao do movie1
    printInfo(movie1);
    cout << "\nNow displaying data from second movie\n";
    //goi ham printInfo truyen vao do movie2
    printInfo(movie2);
    return 0;
}
//khai bao ham printInfo gom struct MovieData
void printInfo (const MovieData &m){
    //xuat ra gia tri cau cac thanh vien cua MovieData
    cout << "Title: " << m.title;
    cout << "\nDirector: " << m.director;
    cout << "\nRelease year: " << m.releaseYear;
    cout << "\nRunning time: " << m.runningTime << endl;
}