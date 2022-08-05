#include<iostream>
using namespace std;
class employee{
    int id, basic,sal,hra,it,da;
    char nam[20];   
    public:
    void getdata();
    void printdata();
    void salary();
};
void employee::getdata()
{
    cout<<"employee id:";
    cin>>id;
    cout<<"employee name";
    cin>>nam;
    cout<<"employee basic pay";
    cin>>basic;
    cout<<"HRA:";
    cin>>hra;
    cout<<"IT:";
    cin>>it;
    cout<<"da";
    cin>>da;
    
}
void employee::salary()
{
    sal=basic+hra+da-it;
}
void employee::printdata()
{
    cout<<id<<"\t\t"<<nam<<"\t\t"<<basic<<"\t\t"<<hra<<"\t\t"<<it<<"\t\t"<<da<<"\t\t"<<sal;
}

int main()
{
   int n,i;
   employee e[20];
   cout<<"enter number of employees";
   cin>>n;
   for(int i=0;i<n;i++)
   {
      e[i].getdata();
      e[i].salary();
   }
   cout<<"employee Id\tName\tBasic\tHra\tIT\tDA\tSal";
   for(int i=0;i<n;i++)
   {
    e[i].printdata();
   }
   return 0;
}