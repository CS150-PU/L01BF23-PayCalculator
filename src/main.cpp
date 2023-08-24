//******************************************************************************
// File name:   main.cpp
// Author:      WRITE YOUR NAME HERE
// Date:        8/29/2023
// Class:       CS150-XX (Replace XX with your section number)
// Assignment:  Pay Calculator
// Purpose:     Calculates the user's pay based on an hourly wage and the
//              number of hours worked
// Hours:       0.5
//******************************************************************************

#include <iostream>

using namespace std;

int main () {
  double hours, rate, pay;

  // Get number of hours worked
  cout << "How many hours did you work? ";
  cin >> hours;

  // Get the hourly pay rate
  cout << "How much did you get paid per hour? ";
  cin >> rate;

  // Calculate the pay
  pay = hours * rate;

  // Display the pay
  cout << "You have earned $" << pay << endl;

  return EXIT_SUCCESS;
}