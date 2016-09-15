// Classics.h -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Movies, a Classics is a specific type of Movie
//		that unlike all movies a Classics movie has Major Actor ReleaseDate
// ----------------------------------------------------------------------------
#include "Classics.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Classics::Classics()
{
}

// destructor -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Classics::~Classics()
{
}

// getChar() ------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
char Classics::getChar() const
{
	return 'C';
}

// setStock --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Classics::setStock(int stock)
{
	this->stock = stock;
	return false;
}

// setDirector -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Classics::setDirector(string director)
{
	this->director = director;
	return false;
}

// setTitle --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Classics::setTitle(string title)
{
	this->title = title;
	return false;
}

// setYear --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Classics::setYear(string year)
{
	this->year = year;
	setActorAndDate();
	return false;
}

// getStock --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
int Classics::getStock() const
{
	return this->stock;
}

// getDirector -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Classics::getDirector() const
{
	return this->director;
}

// getTitle -------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Classics::getTitle() const
{
	return this->title;
}

// getYear --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Classics::getYear() const
{
	return this->year;
	
}

// getLog ----------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
string Classics::getLog() const
{
	return this->MajorActor + " " + this->ReleaseDate;
}

// operator== -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Classics::operator==(const Movie & rhs) const
{
	return (director == rhs.getDirector()) &&
		(title == rhs.getTitle());
}

// operator== -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------


// operator!= -----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Classics::operator!=(const Movie & rhs) const
{
	return !(this == &rhs);
}

// operator> ------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Classics::operator>(const Movie & rhs) const
{
	const Classics* rhs2 = dynamic_cast<const Classics*>(&rhs);
	
	if (ReleaseDate > rhs2->ReleaseDate)
	{
		return true;
	}
	else
	{
		if (MajorActor > rhs2->MajorActor)
		{
			return true;
		}
	}
	return false;
}

// operator> ------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
bool Classics::operator<(const Movie & rhs) const
{
	if (this == &rhs) return false;
	if (this > &rhs) return false;
	return true;
}

void Classics::setActorAndDate()
{
	string line = getYear();
	stringstream stream(line);

	string firstName, lastName, day, year;
	stream >> firstName;
	stream >> lastName;
	stream >> day;
	stream >> year;
	MajorActor = firstName + " " + lastName;
	ReleaseDate = day + " " + year;
}
