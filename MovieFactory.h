// MovieFactory.h -----------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - Movie Factory is a static class which methods inside it can be 
//			called without creating an object of it.
// Features - 
//	static Movie* createMovie(const char type) which determines which type
//	of movie it is based on the char input and returns a dynamicly allocated 
//	Movie*
// ----------------------------------------------------------------------------
#ifndef MOVIE_FACTORY_H
#define MOVIE_FACTORY_H
#include "Movie.h"
#include "Comedy.h"
#include "Classics.h"
#include "Drama.h"
const char COMEDY = 'F';
const char CLASSICS = 'C';
const char DRAMA = 'D';

class MovieFactory
{
public:
	MovieFactory();
	~MovieFactory();
	static Movie* createMovie(const char type);
};

#endif