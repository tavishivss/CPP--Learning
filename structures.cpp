#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle
{ 
   int a,b; 
};

void init(struct rectangle *r,int l,int b)
{
    r->a=l;
    r->b=b;
}

int area(struct rectangle r)
{
    return r.a*r.b;
   
}

int peri(struct rectangle r)
{
    return 2*(r.a+r.b);
}

int main()
{
    int l,b;
    rectangle r={0,0};
    cin>>l>>b;
    init(&r,l,b);
    int a=area(r);
    int p=peri(r);
    cout<<a<<p;
    return 0;

    
}