#include "queue.h"
#include "linear_search.h"
#include "list.h"

using namespace std;

int main() {

	

#pragma region - Q1 -

	queue<int> q1_1;

	string empt = q1_1.empty() ? "Yes" : "No";
	cout << "\nIs the queue empty? " << empt << "\n";
	
	q1_1.push(7);
	q1_1.push(9);
	q1_1.push(3);
	q1_1.push(0);
	q1_1.push(8);
	q1_1.push(1);
	q1_1.push(2);
	q1_1.push(4);
	q1_1.push(5);
	q1_1.push(6);

	q1_1.move_to_rear();

	empt = q1_1.empty() ? "Yes" : "No";
	cout << "Is the queue empty? " << empt << "\n\n";

	while (!q1_1.empty()) { cout << "Popped: "; q1_1.pop(); cout << ". size is now: " << q1_1.size() << "\n"; }

	// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 

	queue<string> q1_2;

	empt = q1_2.empty() ? "Yes" : "No";
	cout << "\nIs the queue empty? " << empt << "\n";

	q1_2.push("ccc");
	q1_2.push("bbb");
	q1_2.push("aaa");

	q1_2.move_to_rear();

	while (!q1_2.empty()) { cout << "Popped: "; q1_2.pop(); cout << ". Size is now: " << q1_2.size() << "\n"; }

#pragma endregion

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

#pragma region - Q2 -
	
	vector<int> items;

	items.push_back(1);
	items.push_back(1);
	items.push_back(1);
	items.push_back(1);
	items.push_back(1);
	items.push_back(7);
	items.push_back(7);
	items.push_back(7);

	for (auto i : items) { cout << i << " "; }

	cout << "\n\nSize: " << items.size();

	cout << "\n\nIndex of last number 1 in vector: " << linear_search(items, 1, items.size() - 1) << "\n\n\n"; // it is -1 because we are accessing index
	

#pragma endregion

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

#pragma region - Q3 -

	list num;

	num.push_back(7);
	num.push_back(9);
	num.push_back(3);
	num.push_back(0);
	num.push_back(8);
	num.push_back(1);
	num.push_back(2);
	num.push_back(4);
	num.push_back(5);
	num.push_back(6);

	num.print();

	for (int i = 0; i < 10; i++) { num.insertion_sort(); } // sort 10 of the items in the list
	cout << "\n";

	num.print();
	
#pragma endregion



	system("pause");
	return 0;
}