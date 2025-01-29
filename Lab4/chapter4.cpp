/*
Name: Quyen Vo
Date 9/14/22
Description: Geometry Calculator
*/

#include <iostream>
using namespace std;

int main()
{
	short choice;
	double area;

	double PI = 3.14519;
	double radius, length, width, base, height;

	cout << "Geometry Calculator \n\n";
	cout << "\t 1. Calculate the Area of a Circle\n";
	cout << "\t 2. Calculate the Area of a Rectangle\n";
	cout << "\t 3. Calculate the Area of a Triangle\n";
	cout << "\t 4. Quit.\n\n";

	cout << "\t Enter your choice: ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "What is the radius of the circle? ";
		cin >> radius;
		area = PI * (radius * radius);
		cout << "The area of your circle is " << area;
	}

	else if (choice == 2)
	{
		cout << "What is the length and width of the rectangle? ";
		cin >> length >> width;
		area = length * width;
		cout << "The area of your rectangle is " << area;
	}

	else if (choice == 3)
	{
		cout << "What is the base and height of the triangle? ";
		cin >> base >> height;
		area = base * height * 0.5;
		cout << "The area of your triangle is " << area;
	}
	else if (choice == 4)
	{
		return 0;
	}
	else
	{
		cout << "\n\Wrong choice!";
	}
}
