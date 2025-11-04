#include <iostream>
using namespace std;

int main()
{
    cout<<"This program prints a butterfly pattern."<<endl;
    int n=4,i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }

        //spaces
        for(j=0;j<2*(n-i-1);j++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    
    //reverse

    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }

        //spaces
        for(j=0;j<2*(n-i-1);j++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
