#include <iostream>
#include <string>
using namespace std;


bool isAllCharUnique(string stringToEval)
{
	int dictBitMask = 0;
	for (int i = 0; i < stringToEval.size(); ++i) {
		int val = stringToEval[i] - 'a';
		if ( (dictBitMask & (1 << val)) > 0 ) {
			return false;
		}
		dictBitMask |= 1 << val;
	}
	return true;
}


int main()
{

	string myStr;
	cout << "This program will test your string if all characters are unique.\n Please enter your string and type enter: \n";
	while (cin >> myStr) {
		
		cout << (isAllCharUnique(myStr) ? "Unique\n\n" : "Not unique\n\n");
		cout << "You can try again.\n Please enter your string and type enter: \n";
	}		
	return 0;
}
