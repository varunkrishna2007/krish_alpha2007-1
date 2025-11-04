#include <iostream>
#include<climits>
using namespace std;

int main()
{
    //Input array size
    int n,b[3]={};
    cout<<"Enter the array size: ";
    cin>>n;
    int a[n]={INT_MIN,INT_MIN,INT_MIN};
    //Input the array
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //checking
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
     if((a[i]+a[j]+a[k])==0)
     {
           if(b[0]!=a[i]&&b[1]!=a[j]&&b[2]!=a[k])
           {
            cout<<"{"<<a[i]<<","<<a[j]<<","<<a[k]<<"}"<<endl;
           }
           b[0]=a[i];
           b[1]=a[j];
           b[2]=a[k];  

     }
        
            }
        }
    }


}