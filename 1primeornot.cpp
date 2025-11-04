#include <iostream>
using namespace std;

int main()
{
    int i;
    unsigned int n;
    cout<<"This program checks if a number is prime or not."<<endl;
    cout<<"Enter a number:";
    cin>>n;
    i=2;
    while ((i*i)<n)
{
        if (n%i==0)
        {
            cout<<"The number "<<n<<" is not a prime number."<<endl;
            exit(0);
        }
        else
        {
            i=i+1;
        }

}

    cout<<"The number "<<n<<" is a prime number."<<endl;
    return 0;
}