/* Week 5 Lab 10
 * 
 * Reed J. Williams
 * CIS328
 * Created on: Jan 12, 2014
 * 
 * Description: Rewrite the merge sort algorithm described in Section 11.4 as a
 *				template function. Use two template parameters, one to set the
 *				element type, and the second to define the ordering algorithm.
 */

#define HEAD "CIS328 Week 5 Lab 10 - Reed J. Williams"

#include <iostream>
#include <cstdlib>
#include <vector>
#include <limits>
#include <ctime>

using namespace std;

template<typename T>
class Compare {
public:
	bool operator()(T & a, T & b) {
		return a < b;
	}
};

template<typename T, typename CMP>
void merge_sort(vector<T>& a, int from, int to, CMP cmp) {
	if (from == to)
		return;
	int mid = (from + to) / 2;
	// Sort the first and the second half
	merge_sort(a, from, mid, cmp);
	merge_sort(a, mid + 1, to, cmp);
	merge(a, from, mid, to, cmp);
}
template<typename T, typename CMP>
void merge(vector<T>& a, int from, int mid, int to, CMP cmp) {
	int n = to - from + 1;
	vector<T> b(n);

	int r = from;
	int s = mid + 1;
	int j = 0;

	while (r <= mid && s <= to) {
		if (cmp(a[r], a[s])) {
			b[j] = a[r];
			r++;
		} else {
			b[j] = a[s];
			s++;
		}
		j++;
	}

	while (r <= mid) {
		b[j] = a[r];
		r++;
		j++;
	}
	while (s <= to) {
		b[j] = a[s];
		s++;
		j++;
	}
	for (j = 0; j < n; j++)
		a[from + j] = b[j];
}
void rand_seed() {
	int seed = static_cast<int>(time(0));
	srand(seed);
}

int rand_int(int a, int b) {
	return a + rand() % (b - a + 1);
}

void print(vector<int> a) {
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
}

int main() {
	cout << HEAD << endl << endl;
	Compare<int> myIntComparer;
	rand_seed();
	vector<int> v(5);
	for (int i = 0; i < v.size(); i++)
		v[i] = rand_int(1, 100);
	print(v);
	cout << endl;
	merge_sort(v, 0, v.size() - 1, myIntComparer);
	print(v);
	return 0;
}
