//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Assignment: 6
// Filename: assignment6.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Assignment 6
// Purpose: Creating the class Book
// Due Date: November 11, 2022
//**************************************************************************
#include <iostream>
using namespace std;

//Creation of the class Book
class Book {
public: 
    string title;       // Attribute
    string author;      // Attribute
    string date_of_pub; // Attribute

    // Parametric constructor with all three attributes inputted
    Book (string x, string y, string z) { 
        title = x;
        author = y;
        date_of_pub = z;
    }

    // Parametric constructor with two attributes inputted
    Book (string x, string y) {
        title = x;
        author = y;
        date_of_pub = "n/a";
    }
    
    // Parametric constructor with one attribute inputted
    Book (string x) {
        title = x;
        author = "n/a";
        date_of_pub = "n/a";
    } 

    // Constructor with no parameters setting all three attributes to "n/a"
    Book ( ) {
        title = "n/a";
        author = "n/a";
        date_of_pub = "n/a";
    }

}
