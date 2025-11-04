#include <iostream>
using namespace std;

int main()
{
    int i,j,m,n;
    cout<<"m stands for number of lines and n refers to the number of stars in each line."<<endl;
    cout<<"Enter the value for m and n respectively: ";
    cin>>m>>n;

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"* "; 
        }
        
        cout<<endl;
    }
    return 0;
}