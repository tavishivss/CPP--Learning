#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p; //declared a pointer p;
    p=&a; //address of a in p;

    cout<<*p<<endl; //value stored in a;
    int **q=&p; //address of p in pointer of pointer q;
    cout<<**q<<endl; //value in a;
    cout<<*q<<endl;  //value in p;

    return 0;
}