// Classics.h -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Movies, a Classics is a specific type of Movie
//		that unlike all movies a Classics movie has Major Actor ReleaseDate
// ----------------------------------------------------------------------------

#ifndef CLASSICS_H
#define CLASSICS_H
#include "Movie.h"
#include <fstream>
#include <sstream>
#include <string>
class Classics : public Movie
{
public:
	Classics();
	~Classics();
	char getChar() const;

	// Setters
	bool setStock(int stock);
	bool setDirector(string director);
	bool setTitle(string title);
	bool setYear(string year);
	//bool setOtherMovie(Movie*& movie);
	// Getters
	int getStock() const;
	string getDirector() const;
	string getTitle() const;
	string getYear() const;
	string getLog() const;


	// operator overloads

	bool operator==(const Movie& rhs) const;
	bool operator!=(const Movie& rhs) const;

	// operator overloads

	bool operator>(const Movie& rhs) const;
	bool operator<(const Movie& rhs) const;

private:
	string MajorActor;
	string ReleaseDate;
	void setActorAndDate();

	
};

#endif