// HistoryTransaction.cpp --------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - To proccess a Transaction that displays the history 
//			 of a single customer
// ----------------------------------------------------------------------------
#include "HistoryTransaction.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
HistoryTransaction::HistoryTransaction()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
HistoryTransaction::~HistoryTransaction()
{
}

// execute --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void HistoryTransaction::execute()
{
	displayCustomerHistory();
}

// setCustomer ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void HistoryTransaction::setCustomer(Customer & customer)
{
	this->custom = &customer;
}

// displayCustomerHistory -----------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void HistoryTransaction::displayCustomerHistory()
{
	
	cout << *custom << endl;
}

