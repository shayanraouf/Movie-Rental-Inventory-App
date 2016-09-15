
#include "MovieKey.h"


MovieKey::MovieKey()
{
}


MovieKey::~MovieKey()
{
}

void MovieKey::setTitle(string title)
{
	this->title = title;
}

void MovieKey::setMovie(Movie *& movie)
{
	pMovie = movie;
}

Movie * MovieKey::getMovie() const
{
	return pMovie;
}

string MovieKey::getTitle() const
{
	return title;
}

bool MovieKey::operator==(const string rhs) const
{
	return title == rhs;
}



int MovieKey::hash() const
{
	int retVal = 0;
	for (int i = 0; i < title.size(); i++)
	{
		retVal += title[i];
	}

	return retVal;
}
