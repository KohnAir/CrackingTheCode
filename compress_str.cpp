#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

void compress(string &str)
{
	map<char, int> hist;

	for (auto c : str) {		
		hist[c] += 1;
	}
	stringstream ss;
	for (const auto & i : hist) {		
		ss << i.first << i.second;	
	}	
	str = ss.str();	
	return;
}

int main()
{
	string str("aaaadbaaavd");
	cout << "testing copress" << endl;
	compress(str);
	cout << "the string compressed is: " << str << endl;
	cin.get();
	return 0;
}
