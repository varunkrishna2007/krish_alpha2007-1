#include <iostream>
using namespace std;

int main() 
{
   cout<<"This is a program to calculate simple interest."<<endl;
   float p,r,t,si;
   cout<<"Enter the principal amount:";
   cin>>p;
   cout<<"Enter the rate of interest:";
   cin>>r;
   cout<<"Enter the time in years:";
   cin>>t;

   si=(p*r*t)/100;
   cout<<"The simple interest is:"<<si<<endl;
   cout<<"The total amount is:"<<p+si<<endl;
   cout<<"Thanks for using the program."<<endl;
   return 0;
}