
#ifndef AGGREGATION_LIBRARY__BOOK_H
#define AGGREGATION_LIBRARY__BOOK_H

#include <string>
#include <vector>


/*
 * @Class Book
 * @Represents a book
 */
class Book {
/*
 * @Public methods of class Book
 */
public:

    enum Genre {

        Fantasy,
        Literary_Fiction,
        Science_Fiction,
        Thrillers,
        Picture_Book,
        Middle_Grade,
        Historical,
        Romance,
        Unknown_genre

    };

    Genre getGenre() const;
/*
 * @Private methods of class Book
 */
private:
    std::string title;
    std::string author;
    std::vector<std::string>history;
    Genre genre;
/*
 * @Public methods of class Book
 */
public:

    /*
     * @Default constructor for class Book
     */
    Book();
    /*
     * @Overloaded constructor for class Book
     */
    Book(std::string title, std::string author, Genre genre);
    /*
     * @Method that adds student names into the history of students vector called 'history'
     */
    void addHistory(std::string studentName);
    /*
     * @Getter accessor method which returns the title of the book
     */
    std::string getTitle() const;
    /*
     * @Setter mutator which sets the title of the book
     */
    void setTitle(std::string title);
    /*
     * @Getter accessor method which returns the author of the book
     */
    std::string getAuthor() const;
    /*
     * @Setter mutator method which sets the author of the book
     */
    void setAuthor(std::string author);
    /*
     * @Setter mutator method which sets the genre of the book from the Genre list from class Book
     */
    void setGenre(Genre genre);
    /*
     * @Method which returns the information of a book object in a string format (title, author, and student name)
     */
    std::string toString();

};


#endif //AGGREGATION_LIBRARY__BOOK_H
