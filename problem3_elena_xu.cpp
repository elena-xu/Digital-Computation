//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Assignment: 2.3
// Filename: problem3_elena_xu.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Assignment 2
// Purpose: Returns a number depending on which case integers fall under  
// Due Date: September 27, 2022
//**************************************************************************
#include <iostream>

using namespace std;

int main ()
{
    // Variable declarations
    int first_number, second_number;

    // Get input from user 
    cout << "Enter two positive non-zero integers with a space in between: ";
    cin >> first_number >> second_number;
    cout << "You entered: " << first_number << ", " << second_number << endl;
    
    // Checks which case the two integers fall under
    if (first_number % 2 == 0 && second_number % 2 == 0)
        cout << first_number + second_number;
    else if (first_number % 2 == 0 || second_number % 2 == 0)
        cout << first_number;
    else 
        cout << second_number;

    return 0;
}