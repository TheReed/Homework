/* Week 6 Lab 11
 * 
 * Reed J. Williams
 * CIS328
 * Created on: Jan 12, 2014
 * 
 * Description: 
 */

#define HEAD "CIS328 Week 6 Lab 11 - Reed J. Williams"

#include <iostream>
#include <string>
#include <stack>

using namespace std;

#include <iostream>
#include <string>



int main()
{
	cout << HEAD << endl << endl;
    stack<string> stack1;
        string str;
        for (int i = 0; i < 3; i++) {
        cout << "Enter strings: ";
        cin >> str;
        stack1.push(str);
        }
        for (int j = 0; j < stack1.size()+2; j++) {
                cout << stack1.top() << endl;
        stack1.pop();
}
}


