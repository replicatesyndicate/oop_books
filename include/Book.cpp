#include "Book.h"
#include <iostream>
/* 
//These are not needed if attributes are going to be constant
void Book::setTitle(std::string title){
    this -> title = title;
}

void Book::setAuthor(std::string author){
    this -> author = author;
}

void Book::setYear(short year){
    if(year < 1454){
        this -> year = 1454;
        std::cout << "Wrong year input. Corrections recommended." << std::endl;
    }
    else {
        this -> year = year;
    }
}
*/

int Book::numberOfBooks = 0;

std::string Book::getTitle() const{
    return this -> title;
}

std::string Book::getAuthor() const{
    return this -> author;
}

short Book::getYear() const{
    return this -> year;
}

int Book::getBookId() const{
    return this -> IDNumber;
}

Book::Book(std::string title, std::string author, short year){
    this -> title = title;
    this -> author = author;
    this -> year = year;
    this -> IDNumber = Book::numberOfBooks++;
}

Book::Book(){

}

Book::~Book(){

}