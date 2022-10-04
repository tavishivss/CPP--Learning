#include<iostream>
using namespace std;

int display(int n,int a[])
{
   for(int i=0;i<n;i++)
   {
    cout<<a[i];
   }
   return 0;
}

int main()
{
  int n;
  cin>>n;
  int A[n];
  for(int i=0; i<n; i++)
  {
    cin>>A[i];
  }
  display(n,A);
  return 0;
}