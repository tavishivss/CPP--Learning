#include<iostream>
using namespace std;
int main()
{
    int a[]={'a','v','e','d'};
    int i,count=0;
    char val;
    cin>>val;
    for(i=0;i<4;i++)
    {
        if(a[i]==val){
            cout<<"value is found "<<i;
            count++;
        }
    }

}