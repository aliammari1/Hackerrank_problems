#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    char ch = 0;
    int x=0;
    int l=0;
    vector<int> a;
    for (int i=0; i<str.size(); i++) {
    if(str[i] == ',')
        l++;
    }
    for (int i=0; i <= l; i++) {
        ss >> x;
        ss >> ch;
        a.push_back(x);
    }
    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}