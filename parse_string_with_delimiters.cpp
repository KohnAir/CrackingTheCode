#include <iostream>
#include <vector>
#include <string>

const int dictSize = 256;    

vector<string> tokenizeMyString(const string &s, const string &del)
{
    static bool dict[dictSize] = { false};

    vector<string> res;
    for (int i = 0; i < del.size(); ++i) {      
        dict[del[i]] = true;
    }

    string token("");
    for (auto &i : s) {
        if (dict[i]) {
            if (!token.empty()) {
                res.push_back(token);
                token.clear();
            }           
        }
        else {
            token += i;
        }
    }
    if (!token.empty()) {
        res.push_back(token);
    }
    return res;
}


int main()
{
    string delString = "MyDog:Odie, MyCat:Garfield  MyNumber:1001001";
//the delimiters are " " (space) and "," (comma) 
    vector<string> res = tokenizeMyString(delString, " ,");

    for (auto &i : res) {

        cout << "token: " << i << endl;
    }
return 0;
}
