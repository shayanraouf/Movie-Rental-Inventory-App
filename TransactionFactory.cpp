// TransactionFactory.cpp -------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - TransactionFactory is a static class which methods inside it can 
//			be called without creating an object of it.
// Features - 
//	static Transaction* createTransaction(...) which determines which type
//	of Transaction* it is based on the inputs and returns a dynamicly allocated 
//	Transaction*
// ----------------------------------------------------------------------------
#include "TransactionFactory.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
TransactionFactory::TransactionFactory()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
TransactionFactory::~TransactionFactory()
{
}

// createTransaction ---------------------------------------------------
// Description: Transcation factory that reads, proccess different 
// transactions based on it's type 
// Precondition: NONE
// ----------------------------------------------------------------------
Transaction* TransactionFactory::
				createTransaction(istream& istream, 
									set<Movie*> movies[], 
											HashTable<Customer>& customers)
{
	// sets the type, tittle year and bool for validation 
	string type, title, year;
	bool isValid = true;
	// Different Tranactions initialized to NULL initially 
	Transaction* retVal = NULL;
	HistoryTransaction* history = NULL;
	BorrowTransaction* borrow = NULL;
	ReturnTransaction* returnTrans = NULL;
	// temp customer Customer
	Customer cust;
	string customerID; // for the customer id

	istream >> type; // read the type 

	switch (type[0])
	{
		case BORROW:
			
			retVal = new BorrowTransaction;
			retVal->setMovieTree(movies);
			// cast so we can access data functions in borrow
			borrow = dynamic_cast<BorrowTransaction*>(retVal);
			istream >> customerID;
			cust.setCustomerID(customerID);
			// set the stream 
			borrow->setStream(istream, isValid);
			// proccess if valid 
			if (isValid)
			{
				if (customers.get(&cust) != NULL)
				{
					customers.get(&cust)->updateHistoryLog(borrow->getLogOfTrans());
				}
			}

			break;
		case RETURN:
			retVal = new ReturnTransaction;
			retVal->setMovieTree(movies);

			returnTrans = dynamic_cast<ReturnTransaction*>(retVal);
			istream >> customerID;
			cust.setCustomerID(customerID);
			returnTrans->setStream(istream, isValid);

			if (isValid)
			{
				if (customers.get(&cust) != NULL)
				{
					customers.get(&cust)->updateHistoryLog(returnTrans->getLogOfTrans());
				}
			}

			break;
		case HISTORY:
			retVal = new HistoryTransaction;
			history = dynamic_cast<HistoryTransaction*>(retVal);
			
			istream >> customerID;
			cust.setCustomerID(customerID);
			history->setCustomer(*customers.get(&cust));
			break;
		case INVENTORY:
			retVal = new InventoryTransaction;
			retVal->setMovieTree(movies);
			break;
		default:
			retVal = NULL;
			cout << type[0] << " is an invalid transaction commend" << endl;
			break;
	}
	return retVal;



}
