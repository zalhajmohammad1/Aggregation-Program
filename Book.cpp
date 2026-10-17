#include "Book.h"
#include <iostream>
#include <vector>

#include <sstream>
 Book::Book(){
    this->title = "Unknown Title";
    this->author = "Unknown Author";
   this->genre = Unknown_genre;
}

Book::Book(std::string title, std::string author, Genre genre) {
    this->title = title;
    this->author = author;
    this->genre = genre;
}

void Book::addHistory(std::string studentName) {
    history.push_back(studentName);
}

 std::string Book::getTitle() const {
    return title;
}

void Book::setTitle(const std::string title) {
    Book::title = title;
}

std::string Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const std::string author) {
    Book::author = author;
}


void Book::setGenre(Book::Genre genre) {
    Book::genre = genre;
}

std::string Book::toString() {
    std::ostringstream ss;
    ss << title << " of " << author << std::endl;
    for (std::string studentName: history){
        ss << studentName << std::endl;
    }
    return ss.str();
}
#include "Book.h"

