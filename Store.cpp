#include "Store.h"


Store::Store()
{
}

Store::~Store()
{
	for (int i = 0; i < SIZE; i++)
	{
		set<Movie*>::iterator it = movies[i].begin();

		for (; it != movies[i].end(); it++)
		{
			
			Movie* del = *it;
			delete del;

		}
	}
}
	

void Store::Excecute()
{
	inputProccesor.proccessMovies(movies);

	inputProccesor.proccessCustomers(customers);
	inputProccesor.proccessCommands(movies,customers);		

}
