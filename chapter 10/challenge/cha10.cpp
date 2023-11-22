#include <iostream>
#include <string>
using namespace std;

//khai bao ham replaceSubstring
string replaceSubstring(string& string1, string& string2, string& string3);
int main() 
{
    //khai bao bien xau ky tu 
    string string1 = "the dog jumped over the fence";
    string string2 = "the";
    string string3 = "that";
    //goi ham turyen vao do string1, string2 va string3, gan vao bien result
    string result = replaceSubstring(string1, string2, string3);
    //xuat ra man hinh cac gai tri
    cout << "Original string: " << string1 << endl;
    cout << "String after replacement: " << result << endl;
    return 0;
}
//khai bao ahm replaceSubstring
string replaceSubstring(string& string1, string& string2, string& string3)
{
    //gan gia tri cho bien result
    string result = string1;
    size_t found = result.find(string2);
    //khoi tao vong lap while de tim lan xuat hien tiep theo cua string2
    while (found != string::npos) {
        result.replace(found, string2.length(), string3);
        found = result.find(string2, found + string3.length());
    }
}