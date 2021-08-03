#include<iostream>
using namespace std;
struct book{
    string title;
    string author;
    double price;
    int pages;
};
void prin(struct book book){
    cout << "------------------------"<<endl;
        cout << "| Name: " << book.title<<" |"<<endl;
        cout << "| Author: " << book.author<<" |"<<endl;
        cout << "| Price: " << book.price<<" |"<<endl;
        cout << "| Pages: " << book.pages<<" |"<<endl;
        cout << "------------------------"<<endl<<endl<<endl;
}
int main(){
   struct book book1;
   book1.title = "She";
   book1.author = "Sheikh";
   book1.price = 10.99;
   book1.pages = 200;

   prin(book1);
}