#include<iostream>
using namespace std;

struct rectangle
{ 
   int a,b; 
};

int area(struct rectangle r)
{
   int area;
   area = r.a*r.b;
   cout<<area<<endl;
   
}

int peri(struct rectangle r)
{
   int peri;
   peri=2*(r.a+r.b);
   cout<<peri;
}

int main()
{
    struct rectangle r;
    r.a=10;
    r.b=20;
    area(r);
    peri(r);

    
}