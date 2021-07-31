#include<iostream>
using namespace std;

void seting(string name) {
    cout << "Hi "<<name;
}
int multi(int n=1, int n2=2){
    return n * n2;
}
int main(){
    seting("Sheikh");
    cout << endl<< endl;
    
    cout << multi();

    return 0;
}