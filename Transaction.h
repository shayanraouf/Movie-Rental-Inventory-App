// Transaction.h ------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - Transaction is a pure virtual otherwise known as abstract class
//			Due to the abstraction of the Transaction class true polymorphism 
//			can be implemented such has having a Tranaction pointer, pointing 
//			to a different type of Transaction allocated in the heap. 
// ----------------------------------------------------------------------------
#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <set>
#include <algorithm>
#include "Movie.h"
#include "Customer.h"
class Transaction
{
public:
	Transaction();
	~Transaction();

	void setMovieTree(set<Movie*> movieTree[]);
	virtual void execute() = 0;
protected:
	set<Movie*>* pMovieTreeReference;

};



#endif