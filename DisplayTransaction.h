// DisplayTransaction.h --------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Transaction and base class of InventoryTransaction
//			and HistoryTransaction
// ----------------------------------------------------------------------------
#ifndef DISPLAY_TRANSACTION_H
#define DISPLAY_TRANSACTION_H
#include "Transaction.h"
class DisplayTransaction: public Transaction
{
public:

	// constructors 
	DisplayTransaction();
	~DisplayTransaction();
	virtual void execute() = 0;
};

#endif