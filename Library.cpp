#include "Book.h"
#include "Library.h"
#include <vector>
#include <algorithm>

Library::Library(std::string name) {
    this->name = name;
}

void Library::addBook(Book* book) {
    stacks[book->getTitle()] = book;
}

void Library::checkOut(Student *student, std::string bookTitle) {
    // Find the book
    Book* toBeCheckedOUt = stacks[bookTitle];
    // Updating the book history
    toBeCheckedOUt->addHistory(student->getName());
    // Give the book to the student
    student->recieveBook(toBeCheckedOUt);
    // Find the book and remove it
    for (std::map<std::string, Book*>::iterator it = stacks.begin(); it != stacks.end(); it++ ){
        if ((it)->first == bookTitle){
            stacks.erase(it);
            break;
        }
    }

//Add it to my checkedOut list
    checkedOut.push_back(bookTitle);
}

void Library::returnBook(Student *student, std::string bookTitle) {
    // Get the book from the student
    Book* theBook = student->returnBook(bookTitle);
    //Put it back on the stack
    stacks[bookTitle] = theBook;
    // Remove it from the checkedOut
    for (std::vector<std::string>::iterator it = checkedOut.begin(); it != checkedOut.end(); it++){
        if ((*it) == bookTitle){
            checkedOut.erase(it);
        }
    }

}

bool Library::bookAvailable(std::string bookTitle) {
    int numberOfCopies = count(checkedOut.begin(), checkedOut.end(), bookTitle);
    return numberOfCopies == 0;
}