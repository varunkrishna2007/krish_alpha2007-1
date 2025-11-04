#include <iostream>
using namespace std;
int p,dp,z;
int check(int p)
{
 dp=z-p;
 if(dp<0)
 {
    dp=dp*(-1);
    return dp;
 }
}
int main()
{
    int x,y,dx,dy;
    cout<<"Enter the values for x,y and z respectively: ";
    cin>>x>>y>>z;
    dx=check(x);
    dy=check(y);
    if(dx>dy)
    {
        cout<<y<<" approaches "<<z<<" faster.";
    }else if(dx==dy)
    {
        cout<<"Both "<<x<<" and "<<y<<" approach "<<z<<" at the same speed.";
    }
    else{
        cout<<x<<" approaches "<<z<<" faster.";
    }
    return 0;
}