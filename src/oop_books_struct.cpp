#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

/////////////////////////////////

struct Book {
    string title;
    string author;
    short year;
};

void addBook(Book *);
void getBook(Book);

int main(int argc, char *argv[]){
    Book horror, scifi, fantasy;

    addBook(&horror);
    addBook(&scifi);
    addBook(&fantasy);

    getBook(horror);
}

void addBook(Book *book){
    /*
    string title;
    string author;
    short year;
    */

    cout << "Input title of book." << endl;
    getline(cin, (*book).title);
    cout << "Input author of book." << endl;
    getline(cin, (*book).author);
    cout << "Input year of publication." << endl;
    cin >> (*book).year;
    cin.ignore();
    /*
    title -> (*book).title;
    author -> (*book).author;
    year -> (*book).year;
    */
}
void getBook(Book book){
    cout << "Title: " << book.title << " Author: " << book.author << " Year: " << book.year << endl;    
}
