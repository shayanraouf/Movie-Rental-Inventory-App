// TransactionFactory.h -------------------------------------------------------
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
#ifndef TRANACTION_FACTORY_H
#define TRANACTION_FACTORY_H
#include <iostream>
#include "Transaction.h"
#include "BorrowTransaction.h"
#include "ReturnTransaction.h"
#include "HistoryTransaction.h"
#include "InventoryTransaction.h"
#include "PhysicalTransaction.h"
#include "DisplayTransaction.h"
#include "HashTable.h"
#include "Customer.h"
const char BORROW = 'B';
const char RETURN = 'R';
const char HISTORY = 'H';
const char INVENTORY = 'I';

using namespace std;
class TransactionFactory
{
public:
	TransactionFactory();
	~TransactionFactory();
	static Transaction* createTransaction(istream& istream, set<Movie*> movies[], HashTable<Customer>& customers);
};

#endif