#include<iostream>
using namespace std;

class Employee{
    public:
      string name;
      int id;
      int age;
      int salary;
      void print(){
          cout <<"ID: "<<id<<endl;
          cout <<"Name: "<<name<<endl;
          cout <<"Age: "<<age<<endl;
          cout <<"Salary: "<<salary<<endl;
          cout <<"-------------------------"<<endl;
      }
};

int main(){
    Employee Sheikh;
    Employee Jidou;
    Sheikh.name = "Sheikh El-Moctar";
    Sheikh.age = 17;
    Sheikh.salary = 3000;
    Sheikh.print();
    Jidou.name = "Jidou Muhammed lemine";
    Jidou.age = 18;
    Jidou.salary = 1500;
    Jidou.print();
/*
    cout << Sheikh.name <<endl;
    cout << Jidou.name<<endl;
*/
}

