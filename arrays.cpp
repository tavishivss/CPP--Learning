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

void insert(struct array *arr,int index,int x)
{
  for(int i=arr->len;i>index;i--)
  {
    arr->a[i]=arr->a[i-1];
  }
  arr->a[index]=x;
  arr->len++;
  
}

int main()
{
  arr.len=4;
  arr.size=10;
  insert(&arr,3,2);
  display(arr);
 
}