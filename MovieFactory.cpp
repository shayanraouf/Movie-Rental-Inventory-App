// MovieFactory.cpp -----------------------------------------------------------------
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
#include "MovieFactory.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
MovieFactory::MovieFactory()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
MovieFactory::~MovieFactory()
{
}

// createMovie ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
Movie * MovieFactory::createMovie(const char type)
{
	Movie* retVal = NULL;

	switch (type)
	{
		case COMEDY:
			retVal = new Comedy;
			break;
		case CLASSICS:
			retVal = new Classics;
			break;
		case DRAMA:
			retVal = new Drama;
			break;
		default:
			retVal = NULL;
			break;
	}

	return retVal;
}
