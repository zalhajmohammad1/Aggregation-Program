# Library Aggregation Simulator

This is a C++ simulation project built to showcase the principles of **Object Aggregation** in Object-Oriented Design. Unlike composition frameworks, this architecture models a weak-ownership system where standalone objects can move fluidly between different holding environments.

## Object Architectural Blueprint
The design focuses on pointer-based relationships across three core elements:
* **Library:** Functions as the tracking framework, storing `Book*` items inside a `std::map` lookup registry using the book titles as keys.
* **Student:** A standalone entity that tracks personal parameters and maps borrowed inventory using a dynamic `std::vector<Book*>` container.
* **Book:** Holds local parameter sets (Title, Author, Genre) and keeps an internal `std::vector<std::string>` to map out its individual checkout history logs.

## Design Concepts Demonstrated
* **Aggregation over Composition:** Objects like `Book` and `Student` maintain completely independent lifecycles. They are passed into the `Library` via raw pointers, meaning destroying the library container leaves the actual data entities safely intact in memory.
* **State Mapping & Transfers:** Handshakes like `checkOut` and `returnBook` securely erase pointers from the library's shelf maps and re-assign them to individual student inventory arrays.
* **Custom Enums:** Features nested `Book::Genre` enumerations to implement strongly typed category filters on data entities.

## Tech Used
* C++
* CMake (for CLion configurations)

## How to Run
1. Clone this repo to your machine.
2. Open the directory path inside CLion.
3. Allow CMake to link up the header dependencies, then compile and run the test driver script.
