#include<iostream>
using namespace std;

int main()
{
  int n,i;
  cout<<"size";
  cin>>n;
  int *A = new int[n];
    for(i=0;i<n;i++)
  {
    cin>>A[i];
  }
  cout<<"elements are: ";
    for(i=0;i<n;i++)
  {
    cout<<A[i];
  }
  int x;
  cout<<"element to append:";
  cin>>x;
  A[n]=x;
  n++;
  cout<<"elements are: ";
    for(i=0;i<n;i++)
  {
    cout<<A[i];
  }
}