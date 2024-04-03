#pragma once

#include <iostream>

#include "Node.h"

using namespace std;

/*
Q1. (13 points) Implement the Queue data structure (you can use linked list to circular array
for implementation) with push(), pop(), front(), size() and empty() functions. The queue should
be a template class (should work with any data type). Perform the following operations:
a) Instantiate the queue with integers and push 10 values into the queue
b) Display all the elements in a queue using just the queue functions mentioned above
(push, pop, front, size etc.)
c) Write a new queue function called move_to_rear that moves the element currently at
the front of the queue to the rear of the queue. The element that was second in line will
be the new front element. Do this using functions push, front, and pop.
*/





template <class D>
class queue {
private:
	Node<D>* head;
	Node<D>* tail;
public:

	queue() { head = nullptr; tail = nullptr;  }


	bool empty() { return head == nullptr; }


	void push(D data) {
		Node<D> *nodeToAdd = new Node<D>;
		nodeToAdd->data = data;

		if (empty()) {
			head = nodeToAdd;
			tail = nodeToAdd;
		}
		else { // if there is already at least one element in the queue
			nodeToAdd->nextNode = head;
			head = nodeToAdd;
		}

	}


	void pop() { // popping back

		Node<D>* temp = head;


		if (head == tail) { head = nullptr; tail = nullptr; cout << temp->data; delete temp; return; } // if one element in list, delete it

		while (temp->nextNode != tail) { temp = temp->nextNode; } // move to be second to last element in list
		Node<D>* del = temp->nextNode; // i.e., del = tail;
		tail = temp; // set tail to be second to last node in list
		tail->nextNode = nullptr;

		cout << del->data;
		delete del;

		return;
	}


	int size() { // loop through the queue and return however many time it loops
		if (empty()) { return 0; }

		Node<D>* temp = head;
		int i = 0;								
		while (temp != nullptr) { i++; temp = temp->nextNode; }
		return i;
	}



	void move_to_rear() {
		if (empty() || (head == tail)) { return; } // if 0 or 1 item in the list

		Node<D>* temp = head;

		while (temp->nextNode != tail) { temp = temp->nextNode; } // move to be second to last element in list
		Node<D>* moving = temp->nextNode; // i.e., del = tail;
		tail = temp; // set tail to be second to last node in list
		tail->nextNode = nullptr;

		moving->nextNode = head; // insert the node at the front of the list
		head = moving;

		cout << "\nMoved " << moving->data << " to end of the queue.\n\n";
	}

};



