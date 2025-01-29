/*
Quyen Vo
February 25 2024
A1

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class PatientData
{
private:
	string fName;
	string lName;
	char gender;
	string address;
	string state;
	string city;
	int zip;
	string mail;

public:
	PatientData();

	PatientData(string firstName, string lastName, char gnder, string add, string cty, string ste, int zipcode, string email)
	{
		fName = firstName;
		lName = lastName;
		gender = gnder;
		address = add;
		city = cty;
		state = ste;
		zip = zipcode;
		mail = email;
	}

	string toCSV()
	{
		return fName + "," + lName + "," + gender + "," + address + "," + city + "," + state + "," + to_string(zip) + "," + mail;
	};

	void setFirstName(string firstName)
	{
		fName = firstName;
	};

	void setLastName(string lastName)
	{
		lName = lastName;
	};

	void setGender(char gnder)
	{
		gender = gnder;
	};

	void setAddress(string addres)
	{
		address = addres;
	};

	void setCity(string cty)
	{
		city = cty;
	};

	void setzipcode(int zipcode)
	{
		zip = zipcode;
	};

	void setEmail(string email)
	{
		mail = email;
	};

	string getFirstName()
	{
		return fName;
	};

	string getLastName()
	{
		return lName;
	};

	char getGender()
	{
		return gender;
	};

	string getAddress()
	{
		return address;
	};

	string getCity()
	{
		return city;
	};

	string getState()
	{
		return state;
	};

	int getZip()
	{
		return zip;
	};

	string getEmail()
	{
		return mail;
	};
};

int main()
{
	// inia PatientData class
	PatientData patient1("John", "Doe", 'M', "102 Const Drive", "Green", "OH", 44232, "john.doe@example.com");

	// get patient csv file
	ofstream outputFile("patients.csv");

	// check if the file is open
	if (outputFile.is_open())
	{
		// writing the header of the csv file
		outputFile << "First, Last, Gender, Address, City, State, Zip, E-Mail\n";

		outputFile << patient1.toCSV() << "\n";

		// close the patient csv file
		outputFile.close();

	}
}
