#include <iostream>
using namespace std;
int main(){
    string name;
    int age;
    string country;
    cout << "what is your name? ";
    cin >>name;
    cout << "what is your age? ";
    cin >>age;
    cout << "where do you live? ";
    cin >>country;
    cout << "Your Information:"<<endl;
    cout << "I am "<<name<< ", I am "<< age<<" years old, "<<"I am from "<<country;
    cout << endl<< endl<< endl;
    // getline
    string s ;
    cout << "hi, your name? ";
    getline(cin,s);
    cout << s;





    return 0;
}