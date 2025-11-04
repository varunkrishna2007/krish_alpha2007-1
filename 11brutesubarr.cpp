#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,st,end,curSum,maxSum=INT_MIN;
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
        curSum=0;
        for(end=st;end<n;end++)
        {
            curSum+=a[end];
            maxSum=max(maxSum,curSum);
        }
        cout<<"The maximum subarray sum is: "<<maxSum;
    }

}