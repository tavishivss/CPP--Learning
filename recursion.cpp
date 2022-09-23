#include<iostream>
using namespace std;
void fB(int n);
void fA(int n)
{
    if(n>0)
    {
        cout<<n;
        fB(n-1);
    }
}

void fB(int n)
{
    if(n>1)
    {
        cout<<n;
        fA(n/2);
    }
}
int main()
{
    int a=20;
    fA(20);
}