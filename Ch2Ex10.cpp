/* 
Program File Name: Ch2Ex10
Programmer: Josh Richards
Date: September 23, 2024
Requirements:
Create a C++ program that does the following:

Miles per Gallon - Part A

A car holds 15 gallons of gasoline and can travel 375 miles before refueling. 
Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):

MPG = Miles Driven/Gallons of Gas Used

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
that the user can enter the number of gallons and the miles driven.



*/

#include <iostream>
using namespace std;


int main()
{
    double gallons,milesDriven;
    
    cout << "Please enter the number of gallons of gas:  ";
    cin >> gallons;

    cout << "Please enter the number of miles driven:  ";
    cin >> milesDriven;

    if (gallons != 0) {
        double mpg = milesDriven / gallons;

        cout << "The car gets " << mpg << " miles per gallon." << endl;
    }
    else {
        cout << "The number of gallons cannot be zero." << endl;
    }

    return 0;
}

