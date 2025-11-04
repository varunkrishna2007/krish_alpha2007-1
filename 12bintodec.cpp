#include <iostream>
using namespace std;

int main()
{
    
    int rem,pow=1,sum=0,n;
    cout<<"Binary to Decimal."<<endl;
    cout<<"Enter a binary number: ";
    cin>>n;
    
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem*pow;
        pow=pow*2;
    }
   
    cout<<sum;
    return 0;
}