#include <iostream>
#include "Book.h"
#include "Student.h"
#include "Library.h"

int main() {
  Book::Genre g = Book::Historical;

  Book* dune = new Book("Dune", "Herbert", Book::Science_Fiction);
  Book* harryPotter = new Book("Harry Potter", "JK Rowling", Book::Middle_Grade);

  dune->addHistory("Paul Raupach");
  harryPotter->addHistory("Mia Raupach");
  dune->addHistory("Fen Chen");

  std::cout << dune->toString() << std::endl;
  std::cout << harryPotter->toString() << std::endl;


  Student* bob = new Student("Bob Smith");
  Student* Zora = new Student("Zora Jefferson");

  bob->recieveBook(dune);
  Zora->recieveBook(harryPotter);

  std::cout << bob->toString() << std::endl;
  std::cout << Zora->toString() << std::endl;

  Library* ohlone = new Library("Ohlone Library");

    std::cout << "Aggregation" << std::endl;




    ohlone->addBook(new Book("The Great Gatsby", "F. Scott Fitzgerald", Book::Literary_Fiction));
    ohlone->addBook (new Book("To Kill a Mockingbird", "Harper Lee", Book::Literary_Fiction));
    ohlone->addBook (new Book ("1984", "George Orwell", Book::Literary_Fiction));
    ohlone->addBook(new Book("Pride and Prejudice", "Jane Austen", Book::Romance));
    ohlone->addBook(new Book("The Catcher in the Rye", "J.D. Salinger", Book::Fantasy));
    ohlone->addBook(new Book("The Hobbit", "J.R.R. Tolkien", Book::Fantasy));
    ohlone->addBook(new Book("The Da Vinci Code", "Dan Brown", Book::Literary_Fiction));
    ohlone->addBook(new Book("Harry Potter and the Philosopher's Stone", "J.K. Rowling", Book::Historical));
    ohlone->addBook(new Book("The Lord of the Rings", "J.R.R. Tolkien", Book::Unknown_genre));
    ohlone->addBook(new Book("A Brief History of Time", "Stephen Hawking", Book::Historical));

    ohlone->checkOut(Zora, "The Great Gatsby");
    ohlone->checkOut(bob, "To Kill a Mockingbird");

    std::cout << Zora->toString() << std::endl;
    std::cout << bob->toString() << std::endl;



 if (ohlone->bookAvailable("The Great Gatsby")){
     std::cout << "The Great Gatsby is available " << std::endl;
 }
else {
    std::cout << "The Great Gatsby is not available" << std::endl;

}if (ohlone->bookAvailable("To Kill a MockingBird")){
     std::cout << "The Great Gatsby is available " << std::endl;
 }
else {
    std::cout << "The Great Gatsby is not available" << std::endl;
}
// ohlone->returnBook(Zora, "The Great Gatsby");

    if (ohlone->bookAvailable("The Great Gatsby")){
        std::cout << "The Great Gatsby is available " << std::endl;
    }
    else {
        std::cout << "The Great Gatsby is not available" << std::endl;
}


    return 0;
}
