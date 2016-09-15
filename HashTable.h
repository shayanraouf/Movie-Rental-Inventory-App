// HashTable.cpp ---------------------------------------------------------------
// Shayan Raouf CSS343 Section Number
// Creation Date: 2/22/2016
// Date of Last Modification: 2/29/2016
// ----------------------------------------------------------------------------
// Purpose - To create an ADT Hash Table that supports average case 
//			 O(1) constant retreival 	
// ----------------------------------------------------------------------------
// Features - This Hash Table supports the following functions:
//			- insert, remove, contains, get, operator<< 
// ----------------------------------------------------------------------------
#ifndef HASH_TABLE_H
#define HASH_TABLE_H
#include <iostream>
#include <string>
#include <set>
#include <fstream>

static const int MAX_DEFAULT_SIZE = 991;

using namespace std;

template<class T>
class HashTable
{
	friend ostream& operator<<(ostream& ostream, const HashTable<T>& rhs)
	{
		for (int i = 1; i < rhs.tableSize; i++)
		{

			if (rhs.Table[i])
			{
				
				ostream << "[" << i << "] [" << *rhs.Table[i]->nodeData->data << "]" << endl;
			}

		}
		return ostream;

	}

public:

	HashTable();
	~HashTable();
	virtual int getHashIndex(T* key) const;
	bool insert(T* newItem);
	bool remove(T* newItem);
	void clear();
	bool contains(T* searchKey) const;
	T* get(T* searchKey) const;
	int getNumberOfItems() const;
	bool isEmpty() const;
	int size() const;
	//assignment operator 
	
protected:

	struct Node
	{
		T* data;
		Node* next;
		int key;
	};

	struct HashTableNode
	{
		int bCount;
		Node* nodeData;
		
	};

	HashTableNode** Table;
	int count;
	int tableSize;

};



template<class T>
HashTable<T>::HashTable()
{
	tableSize = MAX_DEFAULT_SIZE;
	Table = new HashTableNode*[MAX_DEFAULT_SIZE];

	for (int i = 0; i < tableSize; i++)
	{
		Table[i] = NULL;
	}

}
template<class T>
HashTable<T>::~HashTable()
{
	for (int i = 0; i < tableSize; i++)
	{
		if (Table[i])
		{
			delete Table[i]->nodeData->data;
			delete Table[i]->nodeData;
			delete Table[i];
		}

	}

	delete Table;
}

template<class T>
int HashTable<T>::getHashIndex(T* key) const
{
	return key->hash() % tableSize;
}


template<class T>
bool HashTable<T>::insert(T* newItem)
{

	Node* newNode = new Node;
	newNode->data = newItem;
	newNode->next = NULL;


	HashTableNode* newHashNode = new HashTableNode;
	int hashIndex = getHashIndex(newItem);
	newNode->key = hashIndex;

	newHashNode->nodeData = newNode;

	Table[hashIndex] = newHashNode;


	return true;

}

template<class T>
bool HashTable<T>::remove(T* newItem)
{
	return true;
}

template<class T>
void HashTable<T>::clear()
{
}

template<class T>
bool HashTable<T>::contains(T* searchKey) const
{
	int hash = getHashIndex(searchKey);
	
	return Table[hash] != NULL;
}

template<class T>
T * HashTable<T>::get(T * searchKey) const
{

	if (contains(searchKey))
	{
		
		return Table[getHashIndex(searchKey)]->nodeData->data;
	}

	return NULL;
}

template<class T>
int HashTable<T>::getNumberOfItems() const
{
	return 0;
}

template<class T>
bool HashTable<T>::isEmpty() const
{
	return false;
}

template<class T>
int HashTable<T>::size() const
{
	return tableSize;
};






#endif
