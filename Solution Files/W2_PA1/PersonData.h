#pragma once
#include <string>
using namespace std;

class PersonData
{
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;
public:
	//###############################################################################
	//The default constructor, which sets all the attributes of the class to 0		#
	//or empty strings.  See PersonData.cpp.										#
	//###############################################################################
	PersonData();

	//###############################################################################
	//The second constructor, which sets all the attributes of the class based on	#
	//parameters that are passed.  See PersonData.cpp.								#
	//###############################################################################
	PersonData(string, string, string, string, string, string, string);

	//Mutator functions

	//###############################################################################
	//The following functions set each attribute of the class, using a string		#
	//that is passed to the function. See PersonData.cpp.							#
	//###############################################################################
	void setLastName(string);
	void setFirstName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip(string);
	void setPhone(string);

	//Accessor functions
	//###############################################################################
	//The following functions return each attribute of the class.  See				#
	//PersonData.cpp.																#
	//###############################################################################
	string getLastName() const;
	string getFirstName() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	string getZip() const;
	string getPhone() const;

	//###############################################################################
	//The destructor for the class.													#
	//###############################################################################
	~PersonData();
};

