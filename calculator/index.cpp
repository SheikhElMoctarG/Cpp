#include<cmath>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    cout << abs(-14.0)<<endl;
    cout << fabs(-16.077f)<<endl;
    cout << floor(4.9)<<endl;
    cout << ceil(4.9)<<endl;
    cout << rint(4.4)<<endl;
    cout << fmax(8,3)<<endl;
    cout << fmin(8,3)<<endl;
    cout << fmod(8,3)<<endl;
    cout << pow(8,2)<<endl;
    cout << sqrt(25)<<endl;
    cout << cbrt(8)<<endl;
    cout << fdim(15,13)<<endl;
    cout << fma(5,4,2)<<endl;
    cout << hypot(5,4)<<endl;
    srand(time(0));
    cout <<"Number is: "<< rand() ;
    cout << endl;
    cout << endl;
    cout << endl;
    srand(time(0));
    int a = rand() % 10 + 1;
    cout << "===> "<<a;
    return 0;
} 