//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Assignment: 7
// Filename: assignment7.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Assignment 7, Resubmission
// Purpose: This program conducts rational number operations with the use
//          of a rational number class 
// Due Date: December 10, 2022
//**************************************************************************

#include <iostream>
using namespace std;

class Rational_num {
public:
    int numerator, denominator;

Rational_num () {
    numerator = 0;
    denominator = 1;
}
Rational_num (int n) {
    numerator = n;
    denominator = 1;
}

Rational_num (int n, int d) {
    numerator = n;
    denominator = d;
}

Rational_num add(Rational_num second_num){
    int top = (numerator * second_num.denominator + denominator * second_num.numerator);
    int bottom = (denominator * second_num.denominator);
    Rational_num sum (top,bottom);

    return sum;
}

Rational_num subtract (Rational_num second_num) {
    int top = (numerator * second_num.denominator - denominator * second_num.numerator);
    int bottom = (denominator * second_num.denominator);
    Rational_num difference (top,bottom);

    return difference;
}

Rational_num multiply (Rational_num second_num) {
    int top = (numerator * second_num.numerator);
    int bottom = (denominator * second_num.denominator);
    Rational_num product (top,bottom);

    return product;
}

Rational_num divide (Rational_num second_num) {
    int top = (numerator * second_num.denominator);
    int bottom = (denominator * second_num.numerator);
    Rational_num quotient (top,bottom);

    return quotient;
}
};



int main (){

Rational_num rational1 = Rational_num ();
Rational_num rational2 = Rational_num ();

int num_type, num1 = 0, denom1 = 1, num2 = 0, denom2 = 1;

cout << "Enter 1 if your first number is a whole number. If not, enter 2: " << endl;
cin >> num_type;

if (num_type == 1)
{
    cout << "Please enter your number: ";
    cin >> num1;
    cout << "The number you entered is: " << num1 << endl;
    rational1 = Rational_num (num1);
}

else 
{
    cout << "Please enter the numerator and denominator of your first rational number with a space in between: " << endl;
    cin >> num1 >> denom1;
    cout << "The rational number you entered is: " << num1 << "/" << denom1 << endl;

    if (denom1 == 0)
    {
        cout << "The denominator cannot be 0." << endl;
        return 0;
    }

    rational1 = Rational_num (num1, denom1);
}

cout << "Enter 1 if your second number is a whole number. If not, enter 2: " << endl;
cin >> num_type;

if (num_type == 1)
{
    cout << "Please enter your number: ";
    cin >> num2;
    cout << "The number you entered is: " << num2 << endl;
    cout << "===================================" << endl;
    rational2 = Rational_num (num2);
}

else 
{
    cout << "Please enter the numerator and denominator of your second rational number with a space in between: " << endl;
    cin >> num2 >> denom2;
    cout << "The rational number you entered is: " << num2 << "/" << denom2 << endl;
    cout << "=============================================" << endl;

    if (denom2 == 0)
    {
        cout << "The denominator cannot be 0." << endl;
        return 0;
    }

    rational2 = Rational_num (num2, denom2);
}

cout << "Here are the completed operations with your numbers:" << endl;
cout << "(" << num1 << "/" << denom1 << ") + (" << num2 << "/" << denom2 << ") = " 
     << (rational1.add(rational2)).numerator << "/" << (rational1.subtract(rational2)).denominator << endl;
cout << "(" << num1 << "/" << denom1 << ") - (" << num2 << "/" << denom2 << ") = " 
     << (rational1.subtract(rational2)).numerator << "/" << (rational1.subtract(rational2)).denominator << endl;
cout << "(" << num1 << "/" << denom1 << ") x (" << num2 << "/" << denom2 << ") = " 
     << (rational1.multiply(rational2)).numerator << "/" << (rational1.multiply(rational2)).denominator << endl;
cout << "(" << num1 << "/" << denom1 << ") / (" << num2 << "/" << denom2 << ") = " 
     << (rational1.divide(rational2)).numerator << "/" << (rational1.divide(rational2)).denominator << endl;

return 0;
}

 