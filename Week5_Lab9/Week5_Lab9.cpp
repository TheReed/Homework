/* Week 5 Lab 9
 * 
 * Reed J. Williams
 * CIS328
 * Created on: Jan 12, 2014
 * 
 * Description: Rewrite the selection sort algorithm described in Section 11.1 as a
 *				template function, using the less than operator to compare two elements.
 */

#define HEAD "CIS328 Week 5 Lab 9 - Reed J. Williams"

#include <iostream>

#include "util.h"

/**
 Gets the position of the smallest element in a vector range.
 @param a the vector
 @param from the beginning of the range
 @param to the end of the range
 @return the position of the smallest element in
 the range a[from]...a[to]
 */
int min_position(vector<int>& a, int from, int to) {
	int min_pos = from;
	int i;
	for (i = from + 1; i <= to; i++)
		if (a[i] < a[min_pos])
			min_pos = i;
	return min_pos;
}

/**
 Sorts a vector using the selection sort algorithm
 @param a the vector to sort
 */
template<typename T>
void selection_sort(vector<T>& a) {
	int next; // The next position to be set to the minimum

	for (next = 0; next < a.size() - 1; next++) {
		// Find the position of the minimum
		int min_pos = min_position(a, next, a.size() - 1);
		if (min_pos != next)
			swap(a[min_pos], a[next]);
	}
}

int main() {
	cout << HEAD << endl << endl;
	rand_seed();
	vector<int> v(5);
	for (int i = 0; i < v.size(); i++)
		v[i] = rand_int(1, 100);
	print(v);
	selection_sort(v);
	print(v);
	return 0;
}

