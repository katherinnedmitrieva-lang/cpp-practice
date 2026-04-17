#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    char charr[20];
    string str;
    cout<<"Lenght of string in char before input: "<<strlen(charr)<<endl;
    cout<<"Lenght of string in string before input: "<<str.size()<<endl;
    cout<<"Enter a line of text: ";
    cin.getline(charr, 20);
    cout<<"You entered: "<<charr<<endl;
    cout<<"Enter another line of text: ";
    getline(cin, str);
    cout<<"You entered: "<<str<<endl;
    cout<<"Lenght of string in char after input: "<<strlen(charr)<<endl;
    cout<<"Lenght of string in string after input: "<<str.size()<<endl;

    return 0;
}