#include<iostream>
using namespace std;

void add(int a, int b)
{
   int sum=a+b;
   cout<<sum<<endl;
}

int main()
{
    int c,d;
    cout<<"enter 2 numbers: ";
    cin>>c>>d;
    add(c,d);
}
