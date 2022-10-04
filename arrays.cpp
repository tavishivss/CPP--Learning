#include<iostream>
using namespace std;

struct array
{
  int size;
  int *A;
  int len;
};

void display(struct array arr)
{
  int i;
  for(i=0; i<arr.size; i++)
  {
    cout<<arr.A[i];
  }
}

int main()
{
  int n,i;
  struct array arr;
  cout<<"size of array: ";
  cin>>arr.size;
  arr.A=new int[arr.size];
  arr.len=0;
  cout<<"numbers: ";
  for(i=0;i<arr.size;i++)
  {
    cin>>arr.A[i];
  }
  display(arr);
}