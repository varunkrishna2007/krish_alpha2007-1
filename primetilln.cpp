#include <iostream>
using namespace std;

//global variable
int heart;
//checking whether prime or not
int isPrime(int n)
{
int i=2;    
if(n==1)
{
    cout<<"No prime numbers can be printed.";
    exit(0);
}
else{
    while(i<n)
    {
        if(n%i==0)
        {
            heart=0;
            return 0;
        }
        else{
            i=i+1;
        }
    }
    heart=1;
    
}


}
//printing the numbers
int printPrime(int n)
{
for(int j=2;j<=n;j++)
{
    isPrime(j);
    if(heart==1)
    {
        cout<<j<<" ";
    }
    
}
}
int main()
{

    int n;
    cout<<"This program prints the prime numbers till n."<<endl;
    cout<<"Enter the value for n: ";
    cin>>n;
    printPrime(n);
    return 0;
}


