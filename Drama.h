// Drama.h -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Movies, a Drama is a specific type of Movie
//		that denotes movies of genre type Drama
// ----------------------------------------------------------------------------
#ifndef DRAMA_H
#define DRAMA_H

#include "Movie.h"
class Drama : public Movie
{
public:
	Drama();
	~Drama();

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
	string getLog() const;

	char getChar() const;

	// operator overloads

	bool operator==(const Movie& rhs) const;
	bool operator!=(const Movie& rhs) const;

	// operator overloads

	bool operator>(const Movie& rhs) const;
	bool operator<(const Movie& rhs) const;
};

#endif