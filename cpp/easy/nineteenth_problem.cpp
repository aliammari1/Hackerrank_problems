#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N=0;
    cin >> N;
    set<int> s = {};
    for (int i = 0; i < N; i++) {
    int y=0;
    cin >> y;
    int x=0;
    cin >> x;
    if(y == 1)
    {
        s.insert(x);
    }
    else if(y == 2)
    {
        s.erase(x);
    }
    else
    {
        (s.find(x) != s.end()) ? cout << "Yes" << endl : cout << "No" <<endl;
    }
    }
    return 0;
}
