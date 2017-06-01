//This program demonstrates a class CustomerData, which is derived from
//the base class PersonData.
#include "PersonData.h"
#include "CustomerData.h"
#include <iostream>
#include <string>
using namespace std;

void displayCustomer(CustomerData);

int main()
{
	//Tell the user what the program will do
	cout << "Hello! Welcome to the CustomerData Program." << endl << endl;
	cout << "This program will create two instances of a class called CustomerData." << endl;
	cout << "The first customer created demonstrates the constructor in which parameters" << endl
		<< "are passed at the time the object is created." << endl;
	cout << "The second customer created demonstrates the default constructor, and then" << endl
		<< "uses the class mutator functions to set the values of the attributes." << endl;
	cout << "Let's get started!" << endl << endl;

	//Customer 1: Ask the user for the information, then create an instance of the CustomerData
	//class that uses the second constructor, passing the user's input.

	cout << "Enter the following information for Customer 1:" << endl;
	
	string last;
	cout << "Last Name: ";
	getline(cin, last);
	
	string first;
	cout << "First Name: ";
	getline(cin, first);

	string streetAddress;
	cout << "Street Address: ";
	getline(cin, streetAddress);

	string cty;
	cout << "City: ";
	cin >> cty;

	string st;
	cout << "State: ";
	cin >> st;

	string zp;
	cout << "Zip Code: ";
	cin >> zp;

	string ph;
	cout << "Phone Number: ";
	cin >> ph;

	int cn;
	cout << "Customer Number: ";
	cin >> cn;
	cin.ignore();

	char yesNo = 'y';	//Add the customer to the mailing list by default
	bool ml;
	cout << "Should we add this customer to the mailing list? (y/n): ";
	cin >> yesNo;
	cin.ignore();
	if (yesNo == 'n' || yesNo == 'N')
		ml = false;
	else
		ml = true;

	//Now, we have all of the customer's information.  We will use it to create the first
	//instance of the CustomerData class, using the second constructor and passing it all of the
	//parameters as input by the user.

	cout << endl << "Now creating the first instance of the CustomerData class," << endl
		<< "using the second constructor and passing it all the information you entered..." << endl;
	CustomerData customer1(last, first, streetAddress, cty, st, zp, ph, cn, ml);
	cout << "Done." << endl << endl;

	system("pause");

	//End Customer 1.

	//Customer 2: Create the second instance of the CustomerData class using the default
	//constructor, then ask the user for the input and use the class mutator functions
	//to set the attributes.

	cout << endl << "Now, on to Customer 2." << endl
		<< "This time, we will create the CustomerData object first, " << endl
		<< "using the default constructor, and then ask you for the information to fill in" << endl
		<< "the attributes." << endl;
	cout << "Now creating the second instance of the CustomerData class..." << endl;
	CustomerData customer2;
	cout << "Done." << endl << endl;

	//For testing purposes only: display the values currently stored in customer2;
	//displayCustomer(customer2);
	//cout << endl << endl;
	//End testing

	cout << "Enter the following information for Customer 2:" << endl;
	
	cout << "Last Name: ";
	getline(cin, last);
	customer2.setLastName(last);

	cout << "First Name: ";
	getline(cin, first);
	customer2.setFirstName(first);

	cout << "Street Address: ";
	getline(cin, streetAddress);
	customer2.setAddress(streetAddress);

	cout << "City: ";
	cin >> cty;
	customer2.setCity(cty);

	cout << "State: ";
	cin >> st;
	customer2.setState(st);

	cout << "Zip Code: ";
	cin >> zp;
	customer2.setZip(zp);

	cout << "Phone Number: ";
	cin >> ph;
	customer2.setPhone(ph);

	cout << "Customer Number: ";
	cin >> cn;
	cin.ignore();
	customer2.setCustomerNumber(cn);

	cout << "Should we add this customer to the mailing list? (y/n): ";
	cin >> yesNo;
	cin.ignore();
	if (yesNo == 'n' || yesNo == 'N')
		ml = false;
	else
		ml = true;
	customer2.setMailingList(ml);

	//End Customer 2.

	cout << endl << "Now that you have input all the information, let's display it and" << endl
		<< "make sure it is all correct." << endl << endl;

	system("pause");

	//Display the information about the customers
	cout << endl << "Customer #1" << endl;
	cout << "-----------" << endl;
	displayCustomer(customer1);

	cout << "Customer #2" << endl;
	cout << "-----------" << endl;
	displayCustomer(customer2);

	system("pause");
	return 0;
}

void displayCustomer(CustomerData c)
{
	cout << "Last Name: " << c.getLastName() << endl;
	cout << "First Name: " << c.getFirstName() << endl;
	cout << "Address: " << c.getAddress() << endl;
	cout << "City: " << c.getCity() << endl;
	cout << "State: " << c.getState() << endl;
	cout << "ZIP: " << c.getZip() << endl;
	cout << "Customer Number: " << c.getCustomerNumber() << endl;
	cout << "Mailing List? " << c.getMailingList() << endl << endl;
}