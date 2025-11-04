#include <iostream>
using namespace std;

int main()
{
    int n,st,end;
    cout<<"This program prints all the possible sub arrays for a given array."<<endl;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(st=0;st<n;st++)
    {
        for(end=st;end<n;end++)
        {
            for(int j=st;j<=end;j++)
            {
                cout<<a[j];
            }
            cout<<" ";
        }
        cout<<endl;
    }

}