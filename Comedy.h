// Comedy.h -------------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Movies, a Comedy is a specific type of Movie
//		that's getChar differs by 'F' denoted for funny
// ----------------------------------------------------------------------------

#ifndef COMEDY_H
#define COMEDY_H


#include "Movie.h"
class Comedy : public Movie
{
public:

	//constructors 
	Comedy(string title, string year);
	Comedy();
	~Comedy();

	// Setters
	bool setStock(int stock);
	bool setDirector(string director);
	bool setTitle(string title);
	bool setYear(string year);

	// Getters
	int getStock() const;
	string getDirector() const;
	string getTitle() const;
	string getYear() const;

	char getChar() const;

	string getLog() const;
	// operator overloads

	virtual bool operator==(const Movie& rhs) const;
	virtual bool operator!=(const Movie& rhs) const;

	// operator overloads

	bool operator>(const Movie& rhs) const;
	bool operator<(const Movie& rhs) const;
};

#endif