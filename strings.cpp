#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const int size = 15;
    char name1[size];//empty array
    char name2[size] = "Katherinne";//initialization of array
    cout<<"Hello! I'm "<<name2;
    cout<<"!\nWhat's your name? ";
    cin>>name1;
    cout<<"Well,"<<name1<<" your name has"<<strlen(name1)<<" letters and is stored in an array of size "<<sizeof(name1)<<"bytes.";
    cout<<"\nYour initial is "<<name1[0]<<".";
    name1[0] = '\0';//assigning null character to the first element of the array
    cout<<"Here are the first 3 characters of my name: "<<name2<<endl;
    return 0;

}