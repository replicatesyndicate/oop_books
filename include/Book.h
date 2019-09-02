#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

class Book {
    private:
        std::string title;
        std::string author;
        short year;
        int IDNumber;

    public:
        Book(std::string,std::string,short);
        Book();
        ~Book();

        /* 
        //Uncomment if you want to somehow edit the attributes
        //No need for these methods if you want to use above attrs directly in the constructor!
        void setTitle(std::string);
        void setAuthor(std::string);
        void setYear(short);
        */

        static int numberOfBooks;
        
        std::string getTitle() const;
        std::string getAuthor() const;
        short getYear() const;
        int getBookId() const;
};
#endif