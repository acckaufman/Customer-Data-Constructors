#include "PersonData.h"
#include "CustomerData.h"
#include <string>
using namespace std;

//###############################################################################
//The default constructor, which sets all the attributes of both the base		#
//class and the derived class to 0 or empty strings.							# 
//###############################################################################
CustomerData::CustomerData() : PersonData()
{
	customerNumber = 0;
	mailingList = true;	//Add the customer to the mailing list by default
}

//###############################################################################
//The second constructor, which sets all the attributes of both the base		#
//class and the derived class based on parameters that are passed.				#
//###############################################################################
CustomerData::CustomerData(string l, string f, string a, string c, string s, string z, string p, int number, bool list) : PersonData(l, f, a, c, s, z, p)
{
	customerNumber = number;
	mailingList = list;
}

//Mutator functions

//###############################################################################
//Functions to set the Customer Number and whether or not the customer should	#
//be added to the mailing list.													#
//###############################################################################
void CustomerData::setCustomerNumber(int number)
{
	customerNumber = number;
}

void CustomerData::setMailingList(bool list)
{
	mailingList = list;
}

//Accessor functions

//###############################################################################
//Functions to return either the Customer Number or a string Yes or No, which	#
//indicates whether or not the customer is on the mailing list.					#
//###############################################################################
int CustomerData::getCustomerNumber() const
{
	return customerNumber;
}

string CustomerData::getMailingList() const
{
	if (mailingList == true)
		return "Yes";
	else
		return "No";
}

//###############################################################################
//The destructor for the class.													#		 
//###############################################################################
CustomerData::~CustomerData()
{
}
