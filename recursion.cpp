#include<iostream>
using namespace std;

int fun(int n)
{
    static int x=0;
    x++;
    if(n>0)
    {
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int a=5;
    cout<<fun(a);
    
}