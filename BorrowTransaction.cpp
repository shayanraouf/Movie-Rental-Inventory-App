// BorrowTransaction.cpp --------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - To proccess a Transaction that borrows (deductes) 
//			 from the Movie Inventory that is held in a Binary Search Tree
// ----------------------------------------------------------------------------
#include "BorrowTransaction.h"


// default constructor --------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
BorrowTransaction::BorrowTransaction()
{
}

// destructor -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
BorrowTransaction::~BorrowTransaction()
{
}

// execute --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void BorrowTransaction::execute()
{
	if (movie != NULL)
	{
		if (movie->getChar() == 'C')
		{
			executeClassicsBorrow(*movie);
		}
		else
		{
			executeBorrow(*movie);
		}
			
		
	}
	
}

// executeBorrow ---------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool BorrowTransaction::executeBorrow(Movie& movie)
{

	if (movie.getStock() > 0)
	{

		bool success = movie.setStock(movie.getStock() - 1);

		if (success)
		{
			hasBeenBorrowed = true;
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	
}

bool BorrowTransaction::executeClassicsBorrow(Movie& movie)
{

	if (movie.getStock() == 0 && (movie.getOtherMovie() == NULL || movie.getOtherMovie()->getStock() == 0)) return false;

	if (movie.getStock() > 0)
	{
		return movie.setStock(movie.getStock() - 1);
	}
	else
	{
		int otherMovieStock = movie.getOtherMovie()->getStock();
		return movie.getOtherMovie()->setStock(otherMovieStock - 1);
	}

}

string BorrowTransaction::getLogOfTrans() const
{
	if (movie != NULL)
	{
		return "(Borrowed) " + movie->getTitle();
	}
	return "";
}

