#include<iostream>
using namespace std;

void seting(string name) {
    cout << "Hi "<<name;
}
int multi(int n, int n2){
    return n * n2;
}
int main(){
    seting("Sheikh");
    cout << endl<< endl;
    
    cout << multi(2,8);

    return 0;
}