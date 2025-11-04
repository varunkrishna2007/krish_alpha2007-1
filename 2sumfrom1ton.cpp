#include <iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"This program calculates the sum of all the integers from 1 to n."<<endl;
    cout<<"Enter the number 'n': ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"The sum is: "<<sum<<endl;
    return 0;
}