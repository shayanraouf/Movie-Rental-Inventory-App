// ReturnTransaction.cpp ------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - ReturnTransaction is Child of the PhysicalTransaction class and 
// it's purpose is to return a movie and update the movie interventory 
// ----------------------------------------------------------------------------
#include "ReturnTransaction.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
ReturnTransaction::ReturnTransaction()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
ReturnTransaction::~ReturnTransaction()
{
}

// execute ---------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void ReturnTransaction::execute()
{
	if (movie != NULL)
	{
		executeReturn(*movie);
	}

}

// executeReturn ---------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool ReturnTransaction::executeReturn(Movie & movie)
{
	if (hasBeenBorrowed)
	{
		return movie.setStock(movie.getStock() + 1);
	}
	else
	{
		cout << "Can't Return an Item that has never been borrowed before" << endl;
		return false;
	}
}

string ReturnTransaction::getLogOfTrans() const
{
	if (movie != NULL)
	{
		return "(Returned) " + movie->getTitle();
	}
	
	return "";
}

