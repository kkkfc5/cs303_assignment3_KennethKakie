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

	void insertion_sort(); // SY == SY == SY == SY == :: I MADE INSERTION SORT PART OF THE CLASS. __ YOU DONT HAVE TO __
};