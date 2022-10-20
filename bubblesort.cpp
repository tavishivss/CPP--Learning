#include<iostream>
using namespace std;

void display(int a[],int n)
{
  for(int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

void swap(int *v1,int *v2)
{
   int temp=*v1;
   *v1=*v2;
   *v2=temp;
}

void bubbleSort(int a[],int n)
{
   for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        swap(&a[j],&a[j+1]);
    }
   }
}

int main()
{
    int a[]={90,30,50,20,80,60};
    int n=sizeof(a)/sizeof(a[0]);

    display(a,n);
    bubbleSort(a,n);
    display(a,n);
    return 0;
}