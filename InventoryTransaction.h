// InventoryTransaction.h --------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Display Transaction. 
// - Features 
//		- This class displays the inventory of the movies 
// ----------------------------------------------------------------------------
#ifndef INVENTORY_TRANSACTIONS_H
#define INVENTORY_TRANSACTIONS_H
#include "Movie.h"
#include "DisplayTransaction.h"
#include <iostream>
#include <set>
#include <algorithm>
const string MOVIE_TYPES[] = { "Comedy", "Classics", "Drama"  };
using namespace std;
class InventoryTransaction: public DisplayTransaction
{
public:

	// constructors 
	InventoryTransaction();
	~InventoryTransaction();
	virtual void execute();
	// principle functions that displays the inventory 
	void displayInventory(set<Movie*> movies[], int size);

};

#endif