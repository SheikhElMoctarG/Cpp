#include<iostream>
using namespace std;
int main(){
    string lang = "English";
    string* l = &lang;

    cout << "My lang pointer = "<<l<<endl;
    cout << "value of a pointer = "<<*l<<endl;

    int x = 1;
    int y = 2;
    int* ptr;
    ptr = &x;
    cout << "*ptr = " << *ptr << endl;
    ptr = &y;
    cout << "*ptr = " << *ptr << endl;

    return 0;
}