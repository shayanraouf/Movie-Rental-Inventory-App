// Comedy.h -------------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Movies, a Comedy is a specific type of Movie
//		that's getChar differs by 'F' denoted for funny
// ----------------------------------------------------------------------------
#include "Comedy.h"


// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Comedy::Comedy(string title, string year)
{
	setTitle(title);
	setYear(year);
}

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Comedy::Comedy()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Comedy::~Comedy()
{
}

// setStock -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Comedy::setStock(int stock)
{
	this->stock = stock;
	return true;
}

// setDirector ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Comedy::setDirector(string director)
{
	this->director = director;
	return true;
}

// setTitl --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Comedy::setTitle(string title)
{
	this->title = title;
	return true;
}

// setYear --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Comedy::setYear(string year)
{
	this->year = year;
	return true;
}

// getStock -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
int Comedy::getStock() const
{
	return this->stock;
}

// getDirector ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Comedy::getDirector() const
{
	return this->director;
}

// getTitle --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Comedy::getTitle() const
{
	return this->title;
}

// getYear ---------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Comedy::getYear() const
{
	return this->year;
}

// getChar ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// -------------------------------------------------------------------
char Comedy::getChar() const
{
	return 'F';
}

// getLog ---------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Comedy::getLog() const
{
	return getTitle() + " " + getYear();
}

// operator== -----------------------------------------------------------
// Description: checks to see if two Comedy movies are equal to each other
// Precondition: NONE
// Features: checks by the title and year. If both are equal 
//			  then returns true
// ----------------------------------------------------------------------
bool Comedy::operator==(const Movie & rhs) const
{

	return (title == rhs.getTitle()) && 
		(year == rhs.getYear());
}

// operator== -----------------------------------------------------------


// operator!= -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Comedy::operator!=(const Movie & rhs) const
{
	return !(this == &rhs);
}

// operator> -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Comedy::operator>(const Movie & rhs) const
{
	if (title > rhs.getTitle())
	{
		return true;
	}
	else
	{
		if(year > rhs.getYear())
		{
			return true;
		}
	}
	return false;
}

// operator< -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Comedy::operator<(const Movie & rhs) const
{
	if (this == &rhs) return false;
	if (this > &rhs) return false;
	return true;
}

