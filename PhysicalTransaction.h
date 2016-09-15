// PhysicalTransaction.h ------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - PhysicalTransaction is Child of the Transaction class and Base 
// class for of Borrow and Return Transactions. 
// ----------------------------------------------------------------------------
#ifndef PHYSICAL_TRANSACTION_H
#define PHYSICAL_TRANSACTION_H

#include "Transaction.h"
#include "Customer.h"
#include "Movie.h"
#include "Comedy.h"
#include "Classics.h"
#include "Drama.h"
#include <iostream>
using namespace std;
class PhysicalTransaction : public Transaction
{
public:
	PhysicalTransaction();
	~PhysicalTransaction();
	virtual void execute() = 0;
	void setCustomer(Customer& cust);
	void setStream(istream & istream, bool& success);
	virtual string getLogOfTrans() const = 0;

protected:
	Movie* movie;
	Customer* customer;
	bool hasBeenBorrowed;
};

#endif