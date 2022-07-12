#include <iostream>
using namespace std;

int main() {
    int e_sum=0,o_sum=0,num,rem;
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        if(rem%2==0)
            e_sum++;
        else o_sum++;
        num/=10;
        
    }cout<<e_sum<<"\t"<<o_sum;

    return 0;
}