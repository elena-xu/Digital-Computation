//**************************************************************************
// Student Name: Elena Xu
// Student Number: 21001287
// 
// SYDE 121 Assignment: 3
// Filename: assign3.cpp
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized form other sources and has not been knowingly
// plagiarized by others
//
// Project: Assignment 3
// Purpose: This program computes the side area, total area, and volume  
//          of a cylinder or the area and volume of a sphere depending
//          on users choice
// Due Date: October 6, 2022
//**************************************************************************
#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159; // This variable is defined globally, known to all functions in this program as PI
const double conversion = 0.3937; // This is the Cm to inch conversion factor

double area (double r); // Function declaration for function that computes surface area of sphere
double area (double r, double h); // Function declaration for function that computes side area of cylinder
double total_area (double r, double side_area); // Function declaration for function that computes total area of cylinder
double volume (double r); // Function declaration for function that computes volume of sphere
double volume (double r, double h); // Function declaration for function that computes volume of cylinder 


int main (void)
{
        double h, r; // Variables local to the main function
        int choice = 0; // Variable local to the main function 

        // Get input from user
        cout << "Enter 1 to choose cylinder or enter 2 to choose sphere <Enter> ";
        cin >> choice;
       
        // Check to see which case the users choice falls under
        if (choice == 1) {
        cout << "Enter the radius and the height of the cylinder in Cm <Enter> ";
                cin >> r >> h;
                cout << endl;
                cout << "Before I do any computation or call any function, I want to let you know that \n";
                cout << "you have entered r = " << r << " cm and h = " << h << " cm." << endl;
                cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
                cout << "in the second one I will convert h \n";
        cout << "The side area of the cylinder is " << area(r,h) << " inch-sqr \n";
        cout << "The total area of the cylinder is " << total_area(r,area(r,h)) << " inch-sqr \n";
        cout << "The volume of the cylinder is " << volume(r,h) << " inch-cube \n";
        }
       

        else if (choice == 2) {
        cout << "Enter the radius of the sphere in Cm <Enter> ";
                cin >> r;
                cout << endl;
                cout << "Before I do any computation or call any function, I want to let you know that \n";
                cout << "you have entered r = " << r << " cm" << endl;
                cout << "I am planning to use inch, thus in the first function, I will convert r \n";
        cout << "The area of the sphere is " << area(r) << " inch-sqr \n";
        cout << "The volume of the sphere is " << volume(r) << " inch-cube" << endl;
        }
        
        
        else {
        cout << "Invalid choice error" << endl;
        }

return 0;
}

// Function that computes surface area of a sphere
double area (double r)
{
        r = r * conversion; // converting r to inch
        return 4 * PI * pow (r,2);
}

// Overloaded version of area function that computes side area of a cylinder
double area (double r, double h)
{
        h = h * conversion; // converting h to inch
        r = r * conversion; // converting r to inch
        return 2 * PI * r * h;
}

// Function that computes total area of a cylinder
double total_area (double r, double side_area)
{
        r = r * conversion; // converting r to inch
        return (2 * PI * pow (r,2)) + side_area;
}

// Function that computes the volume of a sphere
double volume (double r)
{
        r = r * conversion; // converting r to inch
        return ( 4.0/3.0 ) * PI * pow (r,3);
}

// Overloaded version of volume function that computes the volume of a cylinder
double volume (double r, double h) 
{
        r = r * conversion; // converting r to inch
        h = h * conversion; // converting h to inch
        return PI * pow (r,2) * h;
}