#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,l,b,a,init=0;
    cout<<"Enter length of the vector: ";
    cin>>n;
    vector<int> height(n);
    cout<<"Enter the heights: ";
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            b=abs(i-j);
            l=min(height[i],height[j]);
            a=l*b;
            if(a>init)
            {
                init=a;
            }
        }
    }
cout<<init;
    
}
