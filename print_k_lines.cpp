#include <iostream>
#include <strstream>
#include <string>
#include <fstream>

#include <vector>
using namespace std;

const size_t k = 3;
int main()
{
	cout << "this is ifsteam test\n";
	vector<string> vec(k);
	ifstream ifs("k_strings");
	string str;
	size_t idx = 0;
	size_t lineCnt = 0;
//	while (getline(ifs, vec[lineCnt %k])) {
	while (ifs.good()) {
		getline(ifs, str);
		if(str.empty()) {break;}
		//vec[lineCnt % k]=str;
		vec[lineCnt % k]= str;
		++lineCnt;
	}
	size_t end;
	if (lineCnt < k) {
		end = lineCnt;
		idx = 0;
	}
	else if (lineCnt >= k) {
		end = k;
		idx = lineCnt % k;
	}

	cout << "Res: " << endl << endl;
	for (int i = 0 ; i < end; ++i) {

		cout << vec[(i + idx) % k] << " " ;
	}
	cout << endl << endl;
	return 0;

}

