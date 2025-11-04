#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sum,n;
    cout<<"Enter the vector size: ";
    cin>>n;
    vector<int>height(n);
    cout<<"Enter the vector elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }
    
}