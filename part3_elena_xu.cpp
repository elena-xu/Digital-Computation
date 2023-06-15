//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Lab: Assignment: 1.3
// Filename: part3_elena_xu.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Strings_in C++
// Purpose: Determines if users number input is within a specific range
// Due Date: September 20, 2022
//**************************************************************************
#include <iostream>
using namespace std;

int main ()
{
    // variable declarations
    int positive_number;
    
    // get input from user 
    cout << "Please enter a positive number less than 10. \n";
    cin >> positive_number;

    // checks if user entered a number in the range
    if ( positive_number >= 5 )
        cout << "The number you entered is in the range. \n";
    
    // number user entered is not within the range
    else 
        cout << "The number you entered is not in the range. \n";

    return 0;

}
