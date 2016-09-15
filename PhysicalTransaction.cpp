// PhysicalTransaction.cpp ------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 3/6/2016
// ----------------------------------------------------------------------------
// Purpose - PhysicalTransaction is Child of the Transaction class and Base 
// class for of Borrow and Return Transactions. 
// ----------------------------------------------------------------------------
#include "PhysicalTransaction.h"

// constructor ----------------------------------------------------------
// Description: sets the data feilds to NULL and hasBeenBorrowed to false
// Precondition: NONE 
// ----------------------------------------------------------------------
PhysicalTransaction::PhysicalTransaction()
{
	hasBeenBorrowed = false;
	movie = NULL;
	customer = NULL;
}

// destructor ----------------------------------------------------------
// Description:  NONE
// Precondition: NONE
// Features:  NONE
// ----------------------------------------------------------------------
PhysicalTransaction::~PhysicalTransaction()
{
}

// setCustomer ----------------------------------------------------------
// Description: sets the Customers
// Precondition: NONE
// Features: sets the Customers passed by reference 
// ----------------------------------------------------------------------
void PhysicalTransaction::setCustomer(Customer & cust)
{
	*customer = cust;
}

// setStream ------------------------------------------------------------
// Description: This function takes in an istream by reference 
// and reads the file accordingly and sets the data fields 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void PhysicalTransaction::setStream(istream & istream, bool& success)
{
	string media, type, title, year;
	
	istream >> media;
	istream >> type;
	istream.get(); // gets white space 
	
	// so far only DVD's can be procced 
	if (media[0] != 'D')
	{
		cout << "Invalid media, Only proccessing DVD's(D) " << endl;
		success = false;
		return;
	}


	if (type[0] == 'F') // comedy 
	{
		Movie* comedy = new Comedy;
		// get the line and stop at a comma 
		getline(istream, title, ',');
		// read in the year
		istream >> year;

		istream.get(); // get white space 

		// set the title and year
		comedy->setTitle(title);
		comedy->setYear(year);

		// iterator through the Binary Search Tree of Commedies 
		set<Movie*>::iterator it = pMovieTreeReference[0].begin();

		for (; it != pMovieTreeReference[0].end(); it++)
		{

			Comedy compare1 = *dynamic_cast<Comedy*>(*it);
			Comedy compare2 = *dynamic_cast<Comedy*>(comedy);

			// if equal set the data field to it
			if (compare1.getTitle() == compare2.getTitle() && compare1.getYear() == compare2.getYear())
			{
				this->movie = *it;
				break;
			}
		}

		delete comedy;
	}
	else if (type[0] == 'C') // classics 
	{
		// classics is a special case where read it differently 
		string day, year, firstName, lastName, input;
		Movie* classics = new Classics;
		getline(istream, input);
		stringstream str(input);
		// set the strings
		str >> day;
		str >> year;
		str >> firstName;
		str >> lastName;
		string concat = firstName + " " + lastName + " " + day + " " + year;
		// set the year
		classics->setYear(concat);

		// iterator through to check if exists 
		set<Movie*>::iterator it = pMovieTreeReference[1].begin();

		for (; it != pMovieTreeReference[1].end(); it++)
		{

			Movie* setint = *it;

			if (classics->getYear() == setint->getYear())
			{
				this->movie = setint;
				break;
			}
		}
		// free memory 
		delete classics;
	

	}
	else if (type[0] == 'D') // drama
	{

		string director, title;
		Movie* drama = new Drama;
		getline(istream, director, ',');
		istream.get();
		getline(istream, title, ',');
		// set as needed 
		drama->setDirector(director);
		drama->setTitle(title);
		// iterate through 
		set<Movie*>::iterator it = pMovieTreeReference[2].begin();

		for (; it != pMovieTreeReference[2].end(); it++)
		{

			Movie* setint = *it;

			if (*drama == *setint)
			{
				this->movie = setint;
				break;
			}
		}

		delete drama;
	}
	else
	{
		cout << type[0] << " is not a valid movie Type" << endl;
		success = false;
	}


}

