#include<iostream>
using namespace std;
int main(){
    string a = "Hello World!";
    cout << a << endl;

    // concanition
    string first = "Sheikh";
    string last = "El-moctar";
    string fullname = first + " "+last;
    cout << fullname<<endl;
    cout << fullname.substr(3,11) <<endl;

    // find
    size_t result = fullname.find("Java");
    if(result != string::npos){
        cout << "we find this word...💡";
    }else{
        cout << "we don't find this word..🚫";
    }



    cout << endl;
    cout << endl;

    // methods
    cout << fullname.size() <<endl;
    cout << fullname.rfind("El") <<endl;
    cout << fullname.rfind("El",6) <<endl;
    return 0;
}