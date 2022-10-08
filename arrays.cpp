#include<iostream>
using namespace std;

struct array
{
 int len;
 int a[10]={1,2,3,4};
 int size;
}arr;

void display(struct array arr)
{
  int i;
  cout<<"elements:";
  for(i=0;i<arr.len;i++)
  {
    cout<<arr.a[i];
  }
}

void append(struct array *arr,int x)
{
    if(arr->len<arr->size)
    arr->a[arr->len++]=x;
  
}

int main()
{
  arr.len=4;
  arr.size=10;
  append(&arr,10);
  display(arr);
  
}