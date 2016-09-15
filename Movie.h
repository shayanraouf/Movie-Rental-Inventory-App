// Movie.h -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - Base class Movies, Parent of Classics, Comedy and Drama
// ----------------------------------------------------------------------------
#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <ostream>
#include <string>


using namespace std;
class Movie 
{
	
	friend ostream& operator<<(ostream& ostream, const Movie& rhs);
public:
	enum MOVIES { COMEDY,CLASSICS, DRAMA, END };
	Movie();
	virtual ~Movie();
	// Setters
	virtual bool setStock(int stock) = 0;
	virtual bool setDirector(string director) = 0;
	virtual bool setTitle(string title) = 0;
	virtual bool setYear(string year) = 0;
	bool setOtherMovie(Movie*& movie);
	// Getters
	virtual int getStock() const = 0;
	virtual string getDirector() const = 0;
	virtual string getTitle() const = 0;
	virtual string getYear() const = 0;
	virtual char getChar() const = 0;
	virtual string getLog() const = 0;
	Movie* getOtherMovie()  const;

	// operator overloads

	virtual bool operator==(const Movie& rhs) const = 0;
	virtual bool operator!=(const Movie& rhs) const = 0;

	// operator overloads

	virtual bool operator>(const Movie& rhs) const = 0;
	virtual bool operator<(const Movie& rhs) const = 0;


protected:
	int stock;
	string director;
	string title;
	string year;
	Movie* otherMovie;
};

#endif