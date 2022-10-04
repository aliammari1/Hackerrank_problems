#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N=0;
    cin >> N;
    vector<unsigned long long> X(N,0);
    for (int i = 0; i < N; i++)
    cin >> X[i];
    int Q=0;
    cin>>Q;
    for (int i = 0; i < Q; i++)
    {
        unsigned long long Y = 0;
        cin >> Y;
        (binary_search(X.begin(),X.end(),Y)) ? cout << "Yes " : cout << "No ";
        cout << distance(X.begin(),lower_bound(X.begin(),X.end(),Y)) + 1 << endl;
    }
    return 0;
}

