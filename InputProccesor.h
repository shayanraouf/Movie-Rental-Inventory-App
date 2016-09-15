// InputProccesor.h --------------------------------------------------------
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
#ifndef INPUT_PROCCESSOR
#define INPUT_PROCCESSOR
const char B = 'B';
const char R = 'R';
const char H = 'H';
const char I = 'I';

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "MovieFactory.h"
#include "Movie.h"
#include "Customer.h"
#include "HashTable.h"
#include "Transaction.h"
#include "InventoryTransaction.h"
#include "TransactionFactory.h"

using namespace std;

class InputProccesor
{
public:
	enum MOVIES { COMEDY_ENUM, CLASSICS_ENUM, DRAMA_ENUM, END };

	// constructors 
	InputProccesor();
	~InputProccesor();

	// void function that proccesses the movies
	void proccessMovies(set<Movie*> movies[]);

	// void function that proccesses the customers
	void proccessCustomers(HashTable<Customer>&);

	// void function that proccesses the commands
	void proccessCommands(set<Movie*> movies[], HashTable<Customer>&);

	
};

#endif