#include<iostream>

using namespace std;

 

int main() {

// Write your code here

int n;

   cin>>n;

   int oddsum = 0, evensum = 0;

   

   while(n > 0){

       int digit = n % 10;

       if(digit%2){    

          //odd number

           oddsum = oddsum + digit;

       }else{

          //even number

           evensum = evensum + digit;

       }

       n = n / 10;

   }

   cout<<evensum<<" "<<oddsum;

}

 