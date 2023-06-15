//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Assignment: 5
// Filename: assignment5.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Assignment 5
// Purpose: This program reads input from a text file containing an array 
//          of 8 positive integers then performs calculations and  
//          creates a table
// Due Date: November 04, 2022
//**************************************************************************

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;


// int x_values;
int x, x_squared, current_sum;
double avg;
int x_array[8];

int main ()
{
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open ("input5.txt");
    out_stream.open ("output5.txt");

    cout << setw(2) << "x" << setw(7) << "x^2" << setw(15) 
         << "Current Sum" << endl;
    out_stream << setw(2) << "x" << setw(7) << "x^2" << setw(15) 
               << "Current Sum" << endl;
    cout << "===" << setw(6) << "===" << setw(16) << "=============" << endl;
    out_stream << "===" << setw(6) << "===" << setw(16) 
               << "=============" << endl;

    for (int i = 1; i < 9; ++i)
    {
        in_stream >> x_array[i];
        x = x_array[i];
        x_squared = pow (x,2);
        cout << setw(2) << x;
        out_stream << setw(2) << x;
        cout << setw(7) << x_squared;
        out_stream << setw(7) << x_squared;
        current_sum += x;
        cout << setw(7) << current_sum << endl;
        out_stream << setw(7) << current_sum << endl;
        avg = current_sum/i;
    }

    cout << "The average of these 8 numbers is: " << avg;
    out_stream << "The average of these 8 numbers is: " << avg;

    in_stream.close();
    out_stream.close();
    
    return 0;
}
