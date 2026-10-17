
#ifndef AGGREGATION_LIBRARY__LIBRARY_H
#define AGGREGATION_LIBRARY__LIBRARY_H
#include <map>
#include <vector>
#include <string>
#include "Book.h"
#include "Student.h"
/*
 * @Library class
 * @Represents a library
 */
class Library {
    /*
     * @Private members of class Library
     */
private:
    std::string name;
    /*
     * @Map operator which stores both a book object and a book title
     */
    std::map<std::string, Book*> stacks;
    std::vector<std::string> checkedOut;

    /*
     * @Public methods of class Library
     */
public:
    /*
     * @overloaded constructor for Library class
     */
    Library(std::string name);
    /*
     * @Method which adds book objects into the map which stores the book title as well
     */
    void addBook(Book* book);
    /*
     * @method which checks out books borrowed from the student and erases it from the stack map
     */
    void checkOut(Student* student, std::string bookTitle);
    /*
     * @Method which returns the book borrowed by a student
     * @Gets the book from student, puts it on the stack then checks it out
     */
    void returnBook(Student* student, std::string bookTitle);
    /*
     * @Method which checks whether a book is available or not
     */
    bool bookAvailable(std::string bookTitle);



};


#endif //AGGREGATION_LIBRARY__LIBRARY_H
