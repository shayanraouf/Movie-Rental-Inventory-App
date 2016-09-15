// Customer.h -------------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Customer has the basics, first and last name and a 
//			string customerID() which we use to obtain out hash() function 
// ----------------------------------------------------------------------------
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <iostream>
#include <vector>
// ID_SIZE must be 4 digits 
const int ID_SIZE = 4;
using namespace std;

class Customer
{
	// operator<< displays the customers in a neatly fashion 
	friend ostream& operator<<(ostream& ostream, const Customer& rhs);
public:

	// constructors 
	Customer();
	Customer(string first, string last, string id);
	~Customer();

	

	// Setters 
	bool setCustomerID(string id);
	bool setFirstName(string first);
	bool setLastName(string last);
	bool setCustomerData(string first, string last, string id);


	// Getters
	string getCustomerID() const;
	string getFirstName() const;
	string getLastName() const;

	int hash() const;

	void updateHistoryLog(string history);
private:
	string firstName;
	string lastName;
	string customerID;
	
	vector<string> historyLog;
};

#endif