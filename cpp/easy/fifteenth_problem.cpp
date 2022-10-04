#include<bits/stdc++.h>

using namespace std;

class Box {
    int l,b,h;
    public:
    Box() {l=0;b=0;h=0;}
    Box(int length,int breadth,int height) {l=length;b=breadth;h=height;}
    Box(Box &B) {l=B.l;b=B.b;h=B.h;}
    int getLength() {return l;}
    int getBreadth() {return b;}
    int getHeight() {return h;}
    long long CalculateVolume() {return 1ll*l*b*h;}
    bool operator<(Box &B) {
        Box b1;
        if(l < B.l)
            return true;
        if(b < B.b && l == B.l)
            return true;
        if(h < B.h && b == B.b && l == B.l)
            return true;
        return false;
    }
    friend ostream& operator<<(ostream& out, Box& B)
    {
        out << B.l << " "<< B.b << " " << B.h ;
        return out;
    }

        
};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

