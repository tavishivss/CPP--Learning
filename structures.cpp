#include<iostream>
using namespace std;

struct rect
{ 
   int a,b; 
}r;

int main()
{
    r={10,5};
    cout<<sizeof(r)<<endl;
}