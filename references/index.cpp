#include<iostream>
using namespace std;
int main(){
    int a = 3;
    string s = "Sheikh";

    cout << "references for variable s: "<<&s<<endl;
    cout << "references for variable a: "<<&a<<endl;
    
    int &r = a;
    cout <<&r << endl;
    cout <<&a << endl;
    return 0;
}