#include <iostream>
using namespace std;

int main() {
    int e_sum=0,o_sum=0,num,rem;
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        if(rem%2==0)
            e_sum+=rem;
        else o_sum+=rem;
        num/=10;
        
    }cout<<e_sum<<" "<<o_sum;

    return 0;
}