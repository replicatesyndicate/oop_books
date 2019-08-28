#include "Library.h"
#include "Book.h"
#include <iostream>

void Library::addBook(Book book){
    static int index_addBook=0;
    if (index_addBook < Library::maxAmountofBooks){
        Library::books[index_addBook++] = book;
        std::cout << "Added " << book.getTitle() << " by " << book.getAuthor() << " to the library as entry number: " << index_addBook << std::endl;
    } else {
        std::cout << "Too many books! Rewriting book entries." << std::endl;
        index_addBook = 0;
        Library::books[index_addBook++] = book;
        std::cout << "Added " << book.getTitle() << " by " << book.getAuthor() << " to the library as entry number: " << index_addBook << std::endl;
    }
}

void Library::getBook(int request){
    std::cout << "Author: " << Library::books[request].getAuthor() << " Title: " << Library::books[request].getTitle() << " Year: " << Library::books[request].getYear() << std::endl; 
}

Library::Library(int maxAmountofBooks){
    this -> maxAmountofBooks;
    Book *books = new Book[maxAmountofBooks];
}

Library::~Library(){
    static int index_Library_Destructor = 1; //debugger
    delete [] books;
    std::cout << "I've deleted: " << index_Library_Destructor << " books!" << std::endl;
}