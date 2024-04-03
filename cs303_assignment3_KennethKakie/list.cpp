#include "list.h"

list::list() {
	head = nullptr;
	tail = nullptr;
	sizeOfList = 0;
}

void list::push_back(int x) {
	Node<int>* add = new Node<int>;
	add->data = x;

	if (head == nullptr) { head = add; tail = add; } // if the list is empty
	else { // else insert add to end of list
		tail->nextNode = add;
		add->prevNode = tail;
		tail = add;
	}

	sizeOfList++;
}


void list::print() {
	Node<int> *temp = head;

	while (temp != nullptr) {
		cout << temp->data << " "; 
		temp = temp->nextNode;
	}

	cout << "\n";
}




/* ORIGINAL==============================================
void insertion_sort(vector <int> &num) {
	int i, j, key;
	bool insertionNeeded = false;

	for (j = 1; j < num.size(); j++) {
		key = num[j];
		insertionNeeded = false;

		for (i = j - 1; i >= 0; i--) {
			if (key < num[i]) {
				num[i + 1] = num[i]; // larger values move right
				insertionNeeded = true;
			}
			else
				break;
		}

		if (insertionNeeded)
			num[i + 1] = key; //Put key into its proper location
	}
}
*/

void list::insertion_sort() {
	int i, j, key;
	bool insertionNeeded = false;

	Node<int>* temp = head->nextNode;

	j = 1;
	while (temp != nullptr) {
		
		key = temp->data;
		insertionNeeded = false;

		for (i = j - 1; i >= 0; i--) {
			if (key < temp->prevNode->data) {
				temp->data = temp->prevNode->data; // larger values move right
				insertionNeeded = true;
			}
			else
				break;
		}

		if (insertionNeeded)
			temp->prevNode->data = key; //Put key into its proper location

		temp = temp->nextNode;
		j++;
	}

}