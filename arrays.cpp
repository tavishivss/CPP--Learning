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
 int index,x;
 cout<<"index and number";
 cin>>index>>x;
 for(i=n;i>index;i--)
 {
   A[i]=A[i-1];
 }
 A[index]=x;
 n++;
   cout<<"elements are: ";
    for(i=0;i<n;i++)
  {
    cout<<A[i];
  }
}