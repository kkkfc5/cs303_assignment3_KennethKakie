#pragma once
#include <iostream>

#include "Node.h"

using namespace std;

class list {
private:
	Node<int>* head;
	Node<int>* tail;

	int sizeOfList;
public:
	list();


	int size() { return sizeOfList; }

	void push_back(int x);

	void print();

	void insertion_sort(); 
};
