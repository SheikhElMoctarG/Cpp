#include<iostream>
using namespace std;

class Employee{
    public:
      string name;
      int id;
      int age;
      int salary;
      Employee(){
          cout <<"ID: "<<id<<endl;
          cout <<"Name: "<<name<<endl;
          cout <<"Age: "<<age<<endl;
          cout <<"Salary: "<<salary<<endl;
          cout <<"-------------------------"<<endl;
      }
};

int main(){
    int i=0;
    Employee Sheikh;
    i++;
    
    Sheikh.name = "Sheikh El-Moctar";
    Sheikh.id = i;
    Sheikh.age = 17;
    Sheikh.salary = 3000;
    Sheikh.print();
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

