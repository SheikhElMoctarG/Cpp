#include <iostream>
using namespace std;
int main(){
    string arr[3] = {"sheikh","moctar","Ahmed"};
    cout << arr[2] << endl;
    
    arr[2] = "Jidou";
    cout << arr[2] << endl;


    int arr2[5] = {0};
    cout << arr2[2] << endl;

    cout << sizeof(arr2) / sizeof(arr2[0]) << endl;

    int arr3 = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<arr3; i++){
        cout << arr[i] << endl;
    }
}