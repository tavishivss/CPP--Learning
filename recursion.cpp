#include<iostream>
using namespace std;

int f(int n)
{
    if(n>100)
    return n-10;
    else 
    return f(f(n+11));
}

int main()
{
    int a;
    cout<<f(95);
}