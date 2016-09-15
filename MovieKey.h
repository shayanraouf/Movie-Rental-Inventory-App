#ifndef MOVIEKEY_H
#define MOVIEKEY_H
#include "Movie.h"
#include <string>
using namespace std;
class MovieKey
{
public:
	MovieKey();
	~MovieKey();
	void setTitle(string title);
	void setMovie(Movie*& movie);

	Movie* getMovie() const;
	string getTitle() const;
	bool operator==(const string rhs) const;

	int hash() const;
private:
	string title;
	Movie* pMovie;
};

#endif