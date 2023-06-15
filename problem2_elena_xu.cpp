//**********************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Assignment: 2.2
// Filename: problem2_elena_xu.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Assignment 2
// Purpose: Calculates sum of odd integers from 1 to 100
// Due Date: September 27, 2022
//**********************************************************************************
#include <iostream>

using namespace std;

int main ()

{
    // Variable declarations
    int num = 0, loop_sum = 0, result;
    
    // Determine sum of odd integers from 1 to 100
    while (num < 100){
        result = num % 2;
        if (result == 1)
            loop_sum += num;
            num += 1;
    }


    // Output results to the screen
    cout << "Result using loop to calculate sum of odd integers from 1 to 100: " 
         << loop_sum << endl;

    // Solution using the formula
    // Variable declarations
    int formula_sum;
    formula_sum = (50 / 2) * (2 * 1 + (50 - 1) * 2);

    // Output results to the screen
    cout << "Result using formula to calculate sum of odd integers from 1 to 100: " 
         << formula_sum;

    return 0;
}