#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    char ch='A';
    cout<<"This program prints a square."<<endl;
    cout<<"Enter the value for n: ";
    cin>>n;

    cout<<"The square is: "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    cout<<"End of the program.";
    return 0;
}