#include<iostream>
using namespace std;
struct book{
    string title;
    string description;
    double price;
    int pages;
};
int main(){
    struct book book1;
    book1.title = "Learn C++ from Zero to advance";
    book1.description = "OF this a book you will all you need to learn C++";
    book1.price = 129.99;
    book1.pages = 559;

    struct book book2;
    book2.title = "Learn English from Zero to advance";
    book2.description = "OF this a book you will all you need to learn English";
    book2.price = 79.99;
    book2.pages = 362;
    
        cout << "------------------------"<<endl;
        cout << "| Name: " << book1.title<<" |"<<endl;
        cout << "| Description: " << book1.description<<" |"<<endl;
        cout << "| Price: " << book1.price<<" |"<<endl;
        cout << "| Pages: " << book1.pages<<" |"<<endl;
        cout << "------------------------"<<endl<<endl<<endl;
        
        cout << "------------------------"<<endl;
        cout << "| Name: " << book2.title<<" |"<<endl;
        cout << "| Description: " << book2.description<<" |"<<endl;
        cout << "| Price: " << book2.price<<" |"<<endl;
        cout << "| Pages: " << book2.pages<<" |"<<endl;
        cout << "------------------------"<<endl<<endl<<endl;
        
    
    return 0;
}