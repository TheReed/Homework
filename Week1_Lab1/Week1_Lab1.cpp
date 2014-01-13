/* Week 1 Lab 1
 * 
 * Reed J. Williams
 * CIS328
 * 
 * Write a recursive function void reverse() that reverses a sentence.
 */

#define HEAD "CIS328 Week 1 Lab 1 - Reed J. Williams"

#include <iostream>
#include <string>

using namespace std;

string reverse(string);					// function declaration

class Sentence {
	string original;
		Sentence(string ss)	: original(ss)
	{}									// the only constructor you need
	void reverse()						// a wrapper for your global function
	{	
		original= ::reverse(original);  // calling the global reverse function
	}
};
string reverse(string original)			// function definition
{
	if (original.length()<2) return original;
	return reverse(original.substr(1))+original[0];
}
int main() 
{
	cout << HEAD << endl << endl;
	string original("Hello!");
	cout << original << endl;
	cout << reverse (original) << endl;
}

		
