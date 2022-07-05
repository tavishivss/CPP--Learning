#include<iostream>
using namespace std;

int main()
{
  //0,1,1,2,3,5;
  int t1=0,t2=1,n,nt;
  cin>>n;
  cout<<t1<<endl<<t2<<endl;
  nt=t1+t2;
  while(nt<=n)
  {
    t1=t2;
    t2=nt;
    nt=t1+t2;
    cout<<nt<<endl;
  }
}