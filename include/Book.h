#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

class Book {
    private:
        std::string title;
        std::string author;
        short year;
    public:
        Book();
        ~Book();
        void setTitle(std::string);
        void setAuthor(std::string);
        void setYear(short);
        std::string getTitle() {return title;}
        std::string getAuthor() {return author;}
        short getYear() {return year;}
};
#endif