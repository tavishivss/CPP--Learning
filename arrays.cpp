#include<iostream>
using namespace std;

struct rect{
 int l,b;
};
int main()
{
  struct rect r;
  cin>>r.l>>r.b;
  cout<<r.l*r.b;
}