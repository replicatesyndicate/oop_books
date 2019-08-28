#include "Book.h"
#include <iostream>

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

Book::Book(){
    title = "Do Androids Dream of Electric Sheep?";
    author = "Philip K. Dick";
    year = 1968;
}

Book::~Book(){

}