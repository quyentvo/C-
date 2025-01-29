/*
Name: Quyen Vo
Date: 9/17/22
Program: Chapter 3: Excercise 20 + 21
*/

#include <iostream>
#include <iomanip> 
using namespace std;

// Excercise 21
int main()
{
    double PI = 3.14159;
    double diameter = 0;
    double sliceArea = 14.125;
    double slices;
    double area;
    double pizzaAmount;
    int partyMembers;

    cout << "How many people will be attending your party? ";
    cin >> partyMembers;

    cout << "How long is the diameter of the pizza in inches? ";
    cin >> diameter;
    area = pow(PI * (diameter / 2), 2.0);

    slices = area / sliceArea;
    pizzaAmount = slices / (partyMembers * 4);
  //  cout << "There are " << setprecision(4) << slices << " slices of pizza with a diameter of " << diameter << " inches."  << endl;
    cout << "The amount of pizzas required for " << partyMembers << " people is: " << setprecision(2) << pizzaAmount << " pizza(s)." << endl;
}

/* Excercise #20
int main()
{
    double PI = 3.14159;
    double diameter = 0;
    double sliceArea = 14.125;
    double slices;
    double area;

    cout << "How long is the diameter of the pizza in inches: ";
    cin >> diameter;
    area = pow(PI * (diameter / 2), 2.0);

    slices = area / sliceArea;

    cout << "There are " << setprecision(4) << slices << " slices of pizza with a diameter of " << diameter << " inches." << endl;
}
*/
