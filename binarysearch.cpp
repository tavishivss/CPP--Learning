#include<iostream>
using namespace std;


int binarSearch(int a[],int l,int h,int key)
{
  while(l<=h)
  {
    int m;
     m=(l+h)/2;
     if(a[m]==key)
     {
       return m;
     }
     if(a[m]<key)
     {
      l=m+1;
     }
     else h=m-1;
  } 
  return -1;
}


int main()
{
  int a[]={10,20,30,40,50};
  int i,m,l,h,val,key;
  cin>>key;
  int result = binarSearch(a,0,4,key);
  if(result==-1)
  {
    cout<<"element not found";
  }
  else cout<<"element found "<< result;
}

