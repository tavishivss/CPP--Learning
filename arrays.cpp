#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"size";
  cin>>n;
  int *A = new int[n];
    for(int i=0;i<n;i++)
  {
    cin>>A[i];
  }

  cout<<"elements are: ";
    for(int i=0;i<n;i++)
  {
    cout<<A[i];
  }
}