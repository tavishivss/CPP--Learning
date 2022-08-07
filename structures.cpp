#include<iostream>
#include<stdio.h>
using namespace std;

class rectangle
{
   public: 
   int a,c; 


void init(int l,int b)
{
    a=l;
    c=b;
}

int area()
{
    return a*c;
   
}

int peri()
{
    return 2*(a+c);
}
};
int main()
{
    int l,b;
    rectangle r;
    cin>>l>>b;
    r.init(l,b);
    int a=r.area();
    int p=r.peri();
    cout<<a<<p;
    

    
}