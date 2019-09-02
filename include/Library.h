#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

class Library {
    private:
        Book *books;
        int maxAmountOfBooks;
        int currentAmountOfBooks;       
    public:
        Library(int);
        ~Library();
        void addBook(Book);
        void getBook(int);
        void showBooks();
};

#endif
