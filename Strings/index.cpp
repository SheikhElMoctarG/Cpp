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
    cout << fullname.rfind("h") <<endl;
    cout << fullname.rfind("El",6) <<endl;
    string name = fullname.replace(0,6,"Ahmed");
    cout << name << endl;
    first.swap(last);
    cout << first +" "+ last << endl;
    string os = "mac";
    string fullos = os.append("OS");
    cout << fullos << endl;
    bool nam = name.empty();
    cout << nam << endl;

    
    return 0;
}