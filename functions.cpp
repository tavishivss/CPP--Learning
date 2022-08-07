//monolithic program 

#include<iostream>
using namespace std;

int area(int l, int b)
{
    return l*b;
}
int peri(int l, int b)
{
    return 2*(l + b);
}
int main()
{
    int l,b;
    cin>>l>>b;
    area(l,b);
    peri(l,b);
}