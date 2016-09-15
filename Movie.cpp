// Movie.cpp -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - Base class Movies, Parent of Classics, Comedy and Drama
// ----------------------------------------------------------------------------
#include "Movie.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Movie::Movie()
{
	otherMovie = NULL;
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Movie::~Movie()
{
}

// operator<< -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
ostream & operator<<(ostream & ostream, const Movie & rhs)
{
	ostream << "\tStock [" << rhs.getStock() << "] \n";
	ostream << "\tDirector [" << rhs.getDirector() << "] \n";
	ostream << "\tTitle [" << rhs.getTitle() << "] \n";
	ostream << "\tYear [" << rhs.getYear() << "] \n";
	//display(ostream);

	return ostream;

}

bool Movie::setOtherMovie(Movie *& movie)
{
	otherMovie = movie;
	return true;
}

Movie * Movie::getOtherMovie() const
{
	return otherMovie;
}
