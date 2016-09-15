// InputProccesor.cpp --------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - The input Proccessor class proccess the three main functions
//			 needed to proccess for the Store class. 
// Functionality - 
//	- void proccessMovies(BSTree<Movie*> movies[])
//		- Takes an array of Binary Search Tree holding Movie pointers. 
//		- Opens the necessary file and proccess all the different movies. 
//
//	- void proccessCustomers(HashTable<Customer>&)
//		- Takes an a Hash Table holding Customers by reference 
//		- Opens the necessary file and proccess all the different Customers
//
//  - void proccessCommands(BSTree<Movie*> movies[], HashTable<Customer>&)
//		- Takes an array of Binary Search Tree holding Movie pointers. 
//		- Takes an a Hash Table holding Customers by reference 
//		- Opens the necessary file and proccess all the different commends
//
// ----------------------------------------------------------------------------
#include "InputProccesor.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
InputProccesor::InputProccesor()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
InputProccesor::~InputProccesor()
{
}

// proccessMovies -------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void InputProccesor::proccessMovies(set<Movie*> movies[])
{
	fstream input;
	input.open("data4movies.txt");
	
	while (!input.eof())
	{
		string readInput;
		getline(input, readInput);

		stringstream lineInput(readInput);
		
		// read the character 
		getline(lineInput, readInput, ',');
		char type = readInput[0];
		// create a movie using the static movie factory 		
		Movie* tempMovie = MovieFactory::createMovie(type);


		if (tempMovie) // if not NULL
		{
			// read the stock and cast to an int
			getline(lineInput, readInput, ',');
			int stock = atoi(readInput.c_str());

			//initialize the movie stock
			tempMovie->setStock(stock);

			// read the white space
			lineInput.get();
			// read the director
			getline(lineInput, readInput, ',');
			string director = readInput;

			//initialize the movie director 
			tempMovie->setDirector(director);

			// read the white space
			lineInput.get();
			getline(lineInput, readInput, ',');
			string title = readInput;

			//initialize the movie title
			tempMovie->setTitle(title);

			// read the white space
			lineInput.get();
			getline(lineInput, readInput, ',');
			string year = readInput;


			year.resize(year.size() - 1);
			//initialize the movie title
			tempMovie->setYear(year);

			set<Movie*>::iterator it;
			Movie* tempMovieComparator;
			switch (tempMovie->getChar())
			{
				case COMEDY:
					movies[COMEDY_ENUM].insert(tempMovie);
					break;
				case CLASSICS:

					it = movies[CLASSICS_ENUM].begin();

					for (; it != movies[CLASSICS_ENUM].end(); it++)
					{

						tempMovieComparator = *it;
						if (*tempMovie == *tempMovieComparator)
						{
							tempMovie->setOtherMovie(tempMovieComparator);
							tempMovieComparator->setOtherMovie(tempMovie);
							
						}

					}

					movies[CLASSICS_ENUM].insert(tempMovie);
					break;
				case DRAMA:
					movies[DRAMA_ENUM].insert(tempMovie);
					break;
				default:
					break;

			}
			
		}

	}

	input.close();
	
}

// proccessCustomers ----------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void InputProccesor::proccessCustomers(HashTable<Customer>& customerContainer)
{
	fstream input;
	input.open("data4customers.txt");
	Customer* customer;
	while (!input.eof())
	{
		string ID, lastName, firstName;

		input >> ID;
		input >> lastName;
		input >> firstName;
		customer = new Customer(firstName, lastName, ID);
		customerContainer.insert(customer);

	}

	input.close();
}

// proccessCommands ----------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void InputProccesor::proccessCommands
	(set<Movie*> movies[], HashTable<Customer>& customers)
{
	if (movies == NULL) return;
	

	fstream input;
	input.open("data4commands.txt");
	string readInput;
	
	while (!input.eof())
	{
		getline(input, readInput);
		stringstream lineInput(readInput);

		Transaction* transaction = 
			TransactionFactory::createTransaction
						(lineInput, movies, customers);
		if (transaction)
		{
			transaction->execute();
		}
			
		delete transaction;
	}
	input.close();

}
