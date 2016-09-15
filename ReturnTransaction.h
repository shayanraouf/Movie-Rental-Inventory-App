// ReturnTransaction.h ------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - ReturnTransaction is Child of the PhysicalTransaction class and 
// it's purpose is to return a movie and update the movie interventory 
// ----------------------------------------------------------------------------
#ifndef RETURN_TRANSACTION_H
#define RETURN_TRANSACTION_H
#include "Movie.h"
#include "Comedy.h"
#include "Classics.h"
#include "PhysicalTransaction.h"

class ReturnTransaction: public PhysicalTransaction
{
public:
	ReturnTransaction();
	~ReturnTransaction();
	virtual void execute();
	bool executeReturn(Movie& movie);
	string getLogOfTrans() const;
};

#endif