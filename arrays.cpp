#include<iostream>
using namespace std;

void display(int n,int a[])
{
    for(int i=0;i<n;i++)
  {
    cout<<a[i];
  }
}

int main()
{
  int n;
  int a[n];
  cout<<"no. of elements: ";
  cin>>n;
  cout<<"elements are: ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  display(n,a);
}