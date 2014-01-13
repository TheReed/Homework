/* Week 3 Lab 5
 * P14.1
 * Reed J. Williams
 * CIS328
 * Created on: Jan 12, 2014
 * 
 * Description: Finish the implementation of the class Fraction by overloading the
 *				remaining arithmetic operations.
 */

#define HEAD "CIS328 Week 3 Lab 5 - Reed J. Williams"

#include "fraction.h"

int main() {
	// Test constructors
	Fraction a; // Value is 0/1
	Fraction b(4); // Value is 4/1
	Fraction c(6, 8); // Value is 6/8, which is converted to 3/4
	Fraction g(2, 5); // Value is 2/5
	Fraction h(5); // Value is 5/1
	Fraction i(2, 9); // Value is 4/9
	Fraction j(1, 3); // Value is 1/3
	// Begin original fraction.cpp code
	cout << "Constructed values " << a << " " << b << " " << c << "\n";
	cout << "Value of c is " << c.numerator() << "/" << c.denominator() << "\n";
	// Test arithmetic instructions
	Fraction d = b + c;
	cout << "4 + 3/4 is " << d << "\n";
	d = b - c;
	cout << "4 - 3/4 is " << d << "\n";
	Fraction e = (b + (-c));
	cout << e << " done with negation\n";
	if (d == e)
		cout << "Subtraction test successful\n";
	a = Fraction(6, 8);
	b = Fraction(7, 8);
	if (a < b)
		cout << "Compare successful\n";
	// Begin Reed Added code
	cout << " 2/5 += 4/1 " << endl;
	g += b;
	cout << g << endl;
	cout << " 5/1 -= 4/1 " << endl;
	h -= b;
	cout << h << endl;
	cout << " 2/9 *= 4/1 " << endl;
	i *= b;
	cout << i << endl;
	cout << " 1/3 /= 4/1 " << endl;
	j /= b;
	cout << j << endl;
	return 0;
}
