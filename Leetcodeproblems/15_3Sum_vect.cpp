#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    //input array size
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    //input array elements
    vector<int> a(n);
    cout<<"Enter the array elements: ";
    for(int &i:a)
    {
        cin>>i;
    }
    //sorting the array
    sort(a.begin(),a.end());
    //declaring a set to store triplets
    set<vector<int>> uniquetriplets;
    //creating the triplets
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==0)
                {
                    vector<int> triplets={a[i],a[j],a[k]};
                    uniquetriplets.insert(triplets);
                }
            }
        }
    }

    cout<<"The required triplets are: ";
    for(auto t:uniquetriplets)
    {
        cout<<"{"<<t[0]<<","<<t[1]<<","<<t[2]<<"}"<<endl;
    }
}