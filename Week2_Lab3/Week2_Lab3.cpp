/* Week2_Lab3
 * 
 * Reed J. Williams
 * CIS328
 * Created on: Jan 12, 2014
 * 
 * Description: Write a function maximum that computes the largest element in a
 *              list<int>.
 */

#define HEAD "CIS328 Week 2 Lab 3 - Reed J. Williams"

#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int maximum(list<int> values);

int main(){

        list<int> rand_values;
        srand(time(NULL));
        for(int i = 1; i <= 5; i++) {
                rand_values.push_back(rand() % 100); // populate rand_values with random values.
        }
        cout << HEAD << endl << endl;
        for (list<int>::iterator it = rand_values.begin(); it != rand_values.end(); it++)
            cout << *it << " ";
        cout << endl << endl << "Maximum value: " << maximum(rand_values);
        return 0;
}

int maximum(list<int> values)
{
     if(values.empty())
         cout << "empty list";

     return *max_element(values.begin(), values.end());
}
