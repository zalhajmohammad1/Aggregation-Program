
#ifndef AGGREGATION_LIBRARY__STUDENT_H
#define AGGREGATION_LIBRARY__STUDENT_H
#include <string>
#include <vector>
#include "Book.h"

/*
 * @Student class
 * @Represents a student
 */
class Student {

    /*
     * @Private members of class Student
     */
private:
    std::string name;
    std::string title;
    std::vector<Book*> books;

    /*
     * @Public methods of class Student
     */
public:
    /*
     * @overloaded constructor for class Student
     */
    Student(std::string name);
    /*
     * @getter accessor method which returns the name of the student
     */
    std::string getName() const;
    /*
     * @Method which receives a book object
     * @Then stores it into the vector of books
     */
    void recieveBook(Book* book);
    /*
     * @Getter method which returns a book
     * @takes in the title of a book
     */
    Book* returnBook(std::string bookTitle);
    /*
     * @Getter accessor method which returns the title of a book
     */
    std::string getTitle() const;
    /*
     * @Method that returns information about the student in a string format
     * @(student name, title of the book)
     */
    std::string toString() const;


};


#endif //AGGREGATION_LIBRARY__STUDENT_H
