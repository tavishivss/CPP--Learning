#include <iostream>
#include <cstdio>
#include <algorithm>  

using namespace std;
int max_of_four(int a,int b, int c, int d)
{
    int lm,fm,rm;
    lm=max(a,b);
    rm=max(c,d);
    fm=max(lm,rm);
    return fm;
}

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
