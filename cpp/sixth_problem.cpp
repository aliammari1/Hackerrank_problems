//Functions
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int x=a;
    if(x<b)
    x=b;
    if(x<c)
    x=c;
    if(x<d)
    x=d;
    return x;
}


int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d) << endl;
    
    return 0;
}
