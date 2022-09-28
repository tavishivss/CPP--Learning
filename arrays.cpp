#include<iostream>
using namespace std;

int main()
{
  int i,n;
  cout<<"Size:";
  cin>>n;
  int *A;
  A=new int[n];
  cout<<"enter elements: ";
  for(int i=0; i<n;i++)
  {
    cin>>A[i];
  }
  cout<<"elements are:";
  for(int i=0; i<n; i++)
  {
    cout<<A[i]<<endl;
  }
}