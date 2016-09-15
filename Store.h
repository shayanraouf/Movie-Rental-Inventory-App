#ifndef STORE_H
#define STORE_H
#include <algorithm>
#include <set>
#include "InputProccesor.h"
#include "HashTable.h"
#include "Transaction.h"
#include "Movie.h"
#include "Comedy.h"
#include "Drama.h"
#include "Classics.h"
const int SIZE = 3;
class Store
{
	
public:
	Store();
	~Store();
	void Excecute();
private:

	// reads from the file and proccess accordingly 
	InputProccesor inputProccesor;

	// An array of 3 Binary Search Trees 
	// for the different movie genres 
	set<Movie*> movies[SIZE];
	
	// A hashtable holding customers 
	HashTable<Customer> customers;

	


};

#endif