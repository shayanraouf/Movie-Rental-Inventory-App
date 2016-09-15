// Drama.cpp -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Movies, a Drama is a specific type of Movie
//		that denotes movies of genre type Drama
// ----------------------------------------------------------------------------
#include "Drama.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Drama::Drama()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Drama::~Drama()
{
}

// setStock -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Drama::setStock(int stock)
{
	this->stock = stock;
	return false;
}

// setDirector ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Drama::setDirector(string director)
{
	this->director = director;
	return false;
}

// setTitle -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Drama::setTitle(string title)
{
	this->title = title;
	return false;
}

// setYear -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Drama::setYear(string year)
{
	this->year = year;
	return false;
}

// getStock -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
int Drama::getStock() const
{
	return this->stock;
}

// getDirector ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Drama::getDirector() const
{
	return this->director;
}

// getTitle -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Drama::getTitle() const
{
	return this->title;
}

// getYear -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Drama::getYear() const
{
	return this->year;
}

// getLog ---------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Drama::getLog() const
{
	return " ";
}

// getChar --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
char Drama::getChar() const
{
	return 'D';
}

// operator== ------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Drama::operator==(const Movie & rhs) const
{
	return (director == rhs.getDirector()) &&
		(title == rhs.getTitle());
}


// operator!= -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Drama::operator!=(const Movie& rhs) const
{
	return !(this == &rhs);
}

// operator> ------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Drama::operator>(const Movie& rhs) const
{
	if (director > rhs.getDirector())
	{
		return true;
	}
	else
	{
		if (title > rhs.getTitle())
		{
			return true;
		}
	}
	return false;
}

// operator< -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Drama::operator<(const Movie & rhs) const
{
	if (this == &rhs) return false;
	if (this > &rhs) return false;
	return true;
}
