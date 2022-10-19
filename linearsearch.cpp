#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40};
    int i,val,flag=0;
    cin>>val;
    for(i=0;i<4;i++)
    {
        if(a[i]==val){
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"found "<<i;
    }
    else cout<<"not found";
}