// InventoryTransaction.cpp --------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/19/2016
// ----------------------------------------------------------------------------
// Purpose - Child class of Display Transaction. 
// - Features 
//		- This class displays the inventory of the movies 
// ----------------------------------------------------------------------------
#include "InventoryTransaction.h"

// constructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
InventoryTransaction::InventoryTransaction()
{
}

// destructor ----------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
InventoryTransaction::~InventoryTransaction()
{
}

// execute --------------------------------------------------------------
// Description: 
// Precondition: NONE
// Features: 
// ----------------------------------------------------------------------
void InventoryTransaction::execute()
{
	displayInventory(pMovieTreeReference, 3);
}

// displayInventor -------------------------------------------------------
// Description: displays the inventory 
// Precondition: NONE
// Features:  displays the inventory by iteratoring through 
// ----------------------------------------------------------------------
void InventoryTransaction::displayInventory(set<Movie*> movies[], int size)
{
	cout << "Inventory:" << endl;
	
	for (int i = 0; i < size; i++)
	{
		cout << "-------------------------------------------------------" << endl;
		cout << MOVIE_TYPES[i] << " " << endl;
		cout << "-------------------------------------------------------" << endl;
		set<Movie*>::iterator j = movies[i].begin();
		for (; j != movies[i].end(); j++)
		{
			
			cout << **j << endl;
		}
	}

}

