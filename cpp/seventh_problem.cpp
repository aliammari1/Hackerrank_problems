//pointer
#include <iostream>
#include <stdio.h>

using namespace std;

void update(int *a,int *b) {
    // Complete this function 
    int x = *b;
    
    if(*a > *b)
    *b = *a - *b; 
    else
    *b = *b - *a;
    
    *a += x;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
