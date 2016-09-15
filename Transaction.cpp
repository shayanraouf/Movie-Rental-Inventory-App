// Transaction.cpp ------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - Transaction is a pure virtual otherwise known as abstract class
//			Due to the abstraction of the Transaction class true polymorphism 
//			can be implemented such has having a Tranaction pointer, pointing 
//			to a different type of Transaction allocated in the heap. 
// ----------------------------------------------------------------------------
#include "Transaction.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Transaction::Transaction()
{
	pMovieTreeReference = NULL;
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Transaction::~Transaction()
{
}

// setMovieTree ---------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void Transaction::setMovieTree(set<Movie*> movieTree[])
{
	pMovieTreeReference = movieTree;
}




