#include<iostream>
using namespace std;
int main(){
    string lang = "English";
    string* l = &lang;

    cout << "My lang pointer = "<<l<<endl;
    cout << "value of a pointer = "<<*l;
    return 0;
}