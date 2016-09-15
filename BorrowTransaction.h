// BorrowTransaction.h --------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - To proccess a Transaction that borrows (deductes) 
//			 from the Movie Inventory that is held in a Binary Search Tree
// ----------------------------------------------------------------------------

#ifndef BORROW_TRANSACTION_H
#define BORROW_TRANSACTION_H

#include "Movie.h"
#include "Comedy.h"
#include "Drama.h"
#include "Classics.h"
#include "PhysicalTransaction.h"
#include <iostream>

using namespace std;
class BorrowTransaction : public PhysicalTransaction
{
public:
	//constructors 
	BorrowTransaction();
	~BorrowTransaction();
	virtual void execute();
	bool executeBorrow(Movie& movie);
	bool executeClassicsBorrow(Movie& movie);
	string getLogOfTrans() const;
};

#endif