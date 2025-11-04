#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[7]={3,-4,5,4,-1,7,-8},i,maxSum=INT_MIN,curSum=0;
    for(i=0;i<7;i++)
    {
        curSum+=a[i];
        maxSum=max(maxSum,curSum);
        if(curSum<0)
        {
            curSum=0;
        }
    }
cout<<"The maximum subarray sum using Kadane's algorithm is: "<<maxSum;
}