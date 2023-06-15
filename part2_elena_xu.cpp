//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Lab: Assignment: 1.2
// Filename: part2_elena_xu.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Strings_in C++
// Purpose: Converts temperature from Fahrenheit to Centigrade
// Due Date: September 20, 2022
//**************************************************************************
#include <iostream>
using namespace std;

int main ()
{   
    // variable declarations
    int temp_in_fahrenheit; 
    int temp_in_centigrade;  

    // get input from user 
    cout << "Please enter the temperature in Fahrenheit to convert: \n";
    cin >> temp_in_fahrenheit;
    cout << "You entered: " << temp_in_fahrenheit << endl;

    // convert user input of Fahrenheit to Centigrade
    temp_in_centigrade = 5 * ( temp_in_fahrenheit - 32 ) / 9;

    // output results to the screen
    cout << temp_in_fahrenheit << " degrees Fahrenheit equals " 
         << temp_in_centigrade << " degrees Centigrade.";

    return 0;
}