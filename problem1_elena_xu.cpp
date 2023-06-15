//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Assignment: 2.1
// Filename: problem1_elena_xu.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Assignment 2
// Purpose: Uses Babylonian algorithm to compute square root of a number
// Due Date: September 27, 2022
//**************************************************************************
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{   
    // Variable declarations
    int n;
    double guess, r, set_guess, percent_error;

    // Gets input from user
    cout << "Enter a positive non-zero integer: ";
    cin >> n;
    cout << "You entered: " << n << endl;

    // Generates a guess of the square root of the number
    guess = n/2;

    // Calculates square root of the number using the Babylonian algorithm
    do {
        r = n/guess;
        set_guess = (guess + r)/2;
        percent_error = abs((guess - set_guess)/guess)* 100;
        guess = set_guess;
    } while (percent_error > 0.5);

    // Outputs final guess to user
    cout << "The estimated square root of " << n << " is " << set_guess;

    return 0;
}