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

    Book hplovecraft;
    Book pkdick;
    Book hmurakami;

    Library lib(library_size);

    hplovecraft.setTitle("The Complete Works of H.P. Lovecraft");
    hplovecraft.setAuthor("H.P. Lovecraft");
    hplovecraft.setYear(1978);

    pkdick.setTitle("Do Androids Dream of Electric Sheep?");
    pkdick.setAuthor("Philip K. Dick");
    pkdick.setYear(1968);

    hmurakami.setTitle("Kafka on the Shore");
    hmurakami.setAuthor("Haruki Murakami");
    hmurakami.setYear(2002);

    //cout << "This is your book: " << book.getTitle() << " by " << book.getAuthor() << ". Year: " << book.getYear() << endl;

    lib.addBook(hplovecraft);
    lib.addBook(pkdick);
    lib.addBook(hmurakami);

    //lib.getBook(1);//should print out "Do Androids Dream of Electric Sheep?" //debugger

    lib.showBooks();   
}
