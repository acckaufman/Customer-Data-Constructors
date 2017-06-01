#include "PersonData.h"
#include <string>
using namespace std;

//###############################################################################
//The default constructor, which sets all the attributes of the class to 0		#
//or empty strings.																#
//###############################################################################
PersonData::PersonData()
{
	lastName = " ";
	firstName = " ";
	address = " ";
	city = " ";
	state = " ";
	zip = " ";
	phone = " ";
}

//###############################################################################
//The second constructor, which sets all the attributes of the class based on	#
//parameters that are passed.													#
//###############################################################################
PersonData::PersonData(string l, string f, string a, string c, string s, string z, string p)
{
	lastName = l;
	firstName = f;
	address = a;
	city = c;
	state = s;
	zip = z;
	phone = p;
}

//Mutator functions

//###############################################################################
//The following functions set each attribute of the class, using a string		#
//that is passed to the function.												#
//###############################################################################
void PersonData::setLastName(string l)
{
	lastName = l;
}

void PersonData::setFirstName(string f)
{
	firstName = f;
}

void PersonData::setAddress(string a)
{
	address = a;
}

void PersonData::setCity(string c)
{
	city = c;
}

void PersonData::setState(string s)
{
	state = s;
}

void PersonData::setZip(string z)
{
	zip = z;
}

void PersonData::setPhone(string p)
{
	phone = p;
}

//Accessor functions

//###############################################################################
//The following functions return each attribute of the class.					#
//###############################################################################
string PersonData::getLastName() const
{
	return lastName;
}
string PersonData::getFirstName() const
{
	return firstName;
}

string PersonData::getAddress() const
{
	return address;
}

string PersonData::getCity() const
{
	return city;
}

string PersonData::getState() const
{
	return state;
}

string PersonData::getZip() const
{
	return zip;
}

string PersonData::getPhone() const
{
	return phone;
}

//###############################################################################
//The destructor for the class.													#
//###############################################################################
PersonData::~PersonData()
{
}
