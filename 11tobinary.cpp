#include <iostream>
using namespace std;

int main()
{
    cout<<"This program converts a decimal numnber to it's binary equivalent."<<endl;
    int n,rem,pow=1,sum=0,t;
    cout<<"Enter the value for n: ";
    cin>>n;
    t=n;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        rem=rem*pow;
        sum=sum+rem;
        pow=pow*10;
    }

    cout<<"The binary equivalent of the decimal number "<<n<<" is: "<<sum<<endl;
    cout<<"Thank you for using the program."<<endl;
    return 0;
}