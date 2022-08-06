#include<iostream>
using namespace std;

struct rectangle{
    int l,b;
};

int main()
{
    struct rectangle *p;
    p=new rectangle;
    p->l=10;
    p->b=5;
    cout<<p->l;
    cout<<p->b;
    return 0;

}