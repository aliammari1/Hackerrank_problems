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
    vector<int> v(N);
    for (auto i=0; i<v.size(); i++)
        cin >> v[i];
    int x=0;
    cin >> x;
    v.erase(v.begin() + x - 1);
    int a=0,b=0;
    cin >> a >> b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout << v.size() << endl;
    for (int i=0; i<v.size(); i++)
    cout << v[i] << " ";
    return 0;
}
