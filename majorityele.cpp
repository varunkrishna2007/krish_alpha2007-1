#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
 int n,i,a,count;
 vector<int>vec={3,3,3,1,1,1,1,2,2,2,2,2,2};
n=vec.size()/2;

for(i=0;i<vec.size();i++)
{
    for(int val:vec)
    {
        count=0;
        if(vec.at(i)==val)
        {
            count++;
        }
    }
    if(count>n)
        {
            a=i;
            break;
        }
}
cout<<"The majority element is: "<<vec.at(i);
}