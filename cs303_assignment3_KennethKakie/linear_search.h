#include <vector>
#include <iostream>

using namespace std;

/*Q2. (5 points) Write a recursive linear search function with a recursive step that finds the last
occurrence of a target in a vector, not the first. You will need to modify the linear search
function (You can find it in the slides Lecture 9 slide 30)*/


// how the original worked: each recursive call literally just is ( index + 1 ). That's how simple it is.
//   |  so the modification I made was to start at the end and work backwards. (i.e. items.size() -> 0, pos_first -> pos_last, and then return (pos_last - 1) to go backwards)
template <class D>
int linear_search(vector<D>& items, D target, int pos_last) { 

	if (pos_last == 0)
		return -1; 

	if (target == items[pos_last])
		return pos_last; 
	
	else
		return linear_search(items, target, pos_last - 1); 
}
