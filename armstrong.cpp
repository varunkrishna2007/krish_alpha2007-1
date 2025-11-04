#include <iostream>
using namespace std;

int main()
{
    int n,h,t,o;
    cout<<"This program checks whether if the given number is armstrong or not."<<endl;
    cout<<"Enter a 3 digit number to check: ";
    cin>>n;
    
    h=n/100;
    o=n/10;
    t=o%10;
    o=n%10;

    if(h*h*h+t*t*t+o*o*o==n)
    {
        cout<<"The three digit number "<<n<<" is a 3 digit armstrong number.";
    }
    else{
       cout<<"The three digit number "<<n<<" is not a 3 digit armstrong number.";
    }

    return 0;
}