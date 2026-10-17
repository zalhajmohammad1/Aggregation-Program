
#include "Student.h"
#include <sstream>
#include <vector>
Student::Student(std::string name) {
    this->name = name;
}

std::string Student::getName() const {
    return name;
}

std::string Student::getTitle() const {
    return title;
}

void Student::recieveBook(Book* book) {
    books.push_back(book);
}

Book* Student::returnBook(std::string bookTitle) {

    Book* temp = nullptr;

    for (std::vector<Book*>::iterator it = books.begin(); it != books.end(); it++) {
        if ((*it)->getTitle() == bookTitle) {
            temp = *it;
            books.erase(it);
            return temp;
        }
    }
    return nullptr; //if (std::find(bookTitle.begin()), bookTitle.end(), )
}

std::string Student::toString() const {
    std::ostringstream ss;
    ss << name << std::endl;
    for (Book* book : books){
        ss << '\t' << book->getTitle() << std::endl;
    }
    return ss.str();
}