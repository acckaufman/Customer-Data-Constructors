#pragma once
#include "PersonData.h"
using namespace std;

class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;
public:
	//###############################################################################
	//The default constructor, which sets all the attributes of both the base		#
	//class and the derived class to 0 or empty strings.  See CustomerData.cpp.		# 
	//###############################################################################
	CustomerData();

	//###############################################################################
	//The second constructor, which sets all the attributes of both the base		#
	//class and the derived class based on parameters that are passed.  See			#
	//CustomerData.cpp.																#
	//###############################################################################
	CustomerData(string, string, string, string, string, string, string, int, bool);

	//Mutator functions

	//###############################################################################
	//Functions to set the Customer Number and whether or not the customer should	#
	//be added to the mailing list.	See CustomerData.cpp.							#
	//###############################################################################
	void setCustomerNumber(int);
	void setMailingList(bool);

	//Accessor functions

	//###############################################################################
	//Functions to return either the Customer Number or a string Yes or No, which	#
	//indicates whether or not the customer is on the mailing list.  See			#
	//CustomerData.cpp.																#
	//###############################################################################
	int getCustomerNumber() const;
	string getMailingList() const;

	//###############################################################################
	//The destructor for the class.													#		 
	//###############################################################################
	~CustomerData();
};

