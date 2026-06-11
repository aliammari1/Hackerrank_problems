#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q=0;
    cin >> Q;
    map<string,int> m = {};
    for (int i = 0; i < Q; i++) {
    int type = 0;
    cin >> type;
    string X= "";
    cin >> X;
    m.insert({X,0});
    if(type == 1)
    {
        int Y=0;
        cin >> Y;
        m.find(X)->second += Y;
    }
    else if(type == 2)
    {
    m.erase(X);
    }
    else {
    cout << m.find(X)->second << endl;
    }
    }
    return 0;
}
