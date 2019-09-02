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

    Book hplovecraft("The Complete Works of H.P. Lovecraft","H.P. Lovecraft",1978);
    Book pkdick("Do Androids Dream of Electric Sheep?","Philip K. Dick",1968);
    Book hmurakami("Kafka on the Shore","Haruki Murakami",2002);
    Book hmurakami2("Kafka on the Shore","Haruki Murakami",2002);
    Book hmurakami3("Kafka on the Shore","Haruki Murakami",2002);

    Library lib(library_size);
    /*
    //Use similar lines if set methods are enabled.
    hmurakami.setTitle("Kafka on the Shore");
    hmurakami.setAuthor("Haruki Murakami");
    hmurakami.setYear(2002);
    */

    //cout << "This is your book: " << book.getTitle() << " by " << book.getAuthor() << ". Year: " << book.getYear() << endl;

    lib.addBook(hplovecraft);
    lib.addBook(pkdick);
    lib.addBook(hmurakami);
    lib.addBook(hmurakami2);
    lib.addBook(hmurakami3);
    
    //lib.getBook(1);//should print out "Do Androids Dream of Electric Sheep?" //debugger

    lib.showBooks();   
}
