#include <iostream>
#include "Book.cpp"
#include "Library.cpp"

using std::cout;
using std::cin;
using std::string;
using std::endl;

/////////////////////////////////

int main(int argc, char *argv[]){

    int library_size = 15;

    Book book;
    Library lib(library_size);

    book.setTitle("The Complete Works of H.P. Lovecraft");
    book.setAuthor("H.P. Lovecraft");
    book.setYear(1978);

    //cout << "This is your book: " << book.getTitle() << " by " << book.getAuthor() << ". Year: " << book.getYear() << endl;

    lib.addBook(book);
    lib.getBook(0);//first book, zeroth index.

    
}
