#include <iostream>
using namespace std;

int factorial(int m)
{
    int fact=1,i;

    for(i=1;i<=m;i++)
    {
        fact=fact*i;
    }
    return fact;
} 


int permu1(int n,int r)
{
    int permu;
    permu=factorial(n)/( factorial(n-r)*factorial(r) );
    return permu;
    
}
int main()
{
    int i,j,n,r,x;
    cout<<"Enter the value for n: ";
    cin>>x;
    cout<<"1"<<endl;
    

    for(i=1;i<=x;i++)
    {
    
        for(j=0;j<=i;j++)
        {
            cout<<permu1(i,j)<<" ";
        }

        
        cout<<endl;
    }
    
  return 0;
}


