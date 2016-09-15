// HistoryTransaction.cpp --------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - To proccess a Transaction that displays the history 
//			 of a single customer
// ----------------------------------------------------------------------------

#ifndef HISTORY_TRANSACTIONS_H
#define HISTORY_TRANSACTIONS_H

#include "DisplayTransaction.h"
#include "Customer.h"
#include "HashTable.h"
class HistoryTransaction : public DisplayTransaction
{
public:
	HistoryTransaction();
	~HistoryTransaction();
	virtual void execute();
	void setCustomer(Customer&);
	void displayCustomerHistory();
private:
	Customer* custom;
};

#endif