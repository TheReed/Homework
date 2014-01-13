/* Week 1 Lab 2
 * 
 * Reed J. Williams
 * CIS328
 * 
 * Description: Using recursion, find the largest element in a vector of integer values.
 *              int maximum(vector<int> values) Hint: Find the largest element in the
 *              subset containing all but the last element. Then compare that maximum to
 *              the value of the last element.
 */ 

#define HEAD "CIS328 Week 1 Lab 2 - Reed J. Williams"

#include <iostream>
#include <vector>
#include <algorithm>

#define SIZE 7
using namespace std;

int maximum(vector<int> values, int index);

int main(int argc, char* argv[])
{
vector<int> values;  // initialize empty vector value
int i;
int index;
cout << HEAD << endl << endl;

if (argc < 2) {
cout << "Please enter a random value on the command line to populate the array." << endl;
exit(0);
}

int randin = atoi(argv[1]);
for (index=0; index<SIZE; ++index) values.push_back(rand() % randin);

for (i=0;i<SIZE;i++)
cout << values[i] << endl;
cout << endl << "Largest Element: ";
cout << maximum( values, index );
cout << "\n";
return 0;
}

int maximum( vector<int> values, int size )
{
if(size==1)
return values[0];
else
{
int highest = maximum(values,size-1);
if(values[size-1] > highest)
return values[size-1];
else
return highest;
}
}
