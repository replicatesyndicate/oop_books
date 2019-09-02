#include "Library.h"
#include "Book.h"
#include <iostream>

void Library::addBook(Book book){
    if (Library::currentAmountOfBooks < Library::maxAmountOfBooks){
        Library::books[Library::currentAmountOfBooks++] = book;
        //std::cout << "Added " << book.getTitle() << " by " << book.getAuthor() << " to the library as entry number: " << Library::currentAmountOfBooks << std::endl; //debugger
    } else {
        std::cout << "Too many books! Aborting book addition." << std::endl;
    }
}

void Library::getBook(int request){
    if (request < maxAmountOfBooks){
        std::cout << "Author: " << Library::books[request].getAuthor() << " Title: " << Library::books[request].getTitle() << " Year: " << Library::books[request].getYear() << std::endl; 
    } else {
        std::cout << "Sorry, this library doesn't have this many books." << std::endl;
        std::cout << "Displaying the first book in our collection instead... ";
        std::cout << "Author: " << Library::books[0].getAuthor() << " Title: " << Library::books[0].getTitle() << " Year: " << Library::books[0].getYear() << std::endl;
        std::cout << "For your book, try looking for a number from 0 to " << Library::maxAmountOfBooks << std::endl;
        
    }    
}

void Library::showBooks(){
    for (int i = 0; i < Library::currentAmountOfBooks; i++){
        std::cout << "In position " << i << " : ";
        Library::getBook(i);        
    }
}
Library::Library(int maxAmountOfBooks){
    Library::maxAmountOfBooks = maxAmountOfBooks;
    Library::books = new Book[maxAmountOfBooks]; //make sure to pass in the pointer's address by the object name
    //std::cout << "Library created with " << Library::maxAmountOfBooks << " many books!" << std::endl; //debugger

    Library::currentAmountOfBooks = 0;
    //std::cout << "This library has just been built and it should have 0 books: " << Library::currentAmountOfBooks << std::endl; //debugger
}

Library::~Library(){
    //static int index_Library_Destructor = 1; //debugger
    delete [] Library::books;
    //std::cout << "I've deleted: " << index_Library_Destructor << " books!" << std::endl;
}