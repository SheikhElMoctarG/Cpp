#include<iostream>
using namespace std;

class Employee{
    public:
      Employee(int id, string name, int age, int salary){
          cout <<"ID: "<<id<<endl;
          cout <<"Name: "<<name<<endl;
          cout <<"Age: "<<age<<endl;
          cout <<"Salary: "<<salary<<endl;
          cout <<"-------------------------"<<endl;
      }
};

int main(){
    int i=0;
    i++;
    Employee Sheikh(i,"Sheikh El-Moctar", 17, 3000);
    Employee Jidou;
    i++;
    Jidou.name = "Jidou Muhammed lemine";
    Jidou.id = i;
    Jidou.age = 18;
    Jidou.salary = 1500;
    Jidou.print();
/*
    cout << Sheikh.name <<endl;
    cout << Jidou.name<<endl;
*/
}

