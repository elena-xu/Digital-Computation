//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Lab: Assignment: 1.1
// Filename: part1_elena_xu.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Strings_in C++
// Purpose: Outputs name and student ID of user
// Due Date: September 20, 2022
//**************************************************************************
#include <iostream>
using namespace std;

int main ()
{ 
    // variable declarations
    string name;
    int student_id;

    // get input from user 
    cout << "What is your name? \n";
    cin >> name;
    cout << "What is your student ID? \n";
    cin >> student_id;
    
    // output results to the screen
    cout << "Hello World from " << name << " with Student ID " 
         << student_id;
    
}