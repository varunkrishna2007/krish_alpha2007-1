#include <iostream>
using namespace std;

int main()
{
    int n,i,count=0,x,sum=0,t,m,y,z;
    cout<<"This program checks whether the given number is an armstrong number or not."<<endl;
    cout<<"Enter a number to check:";
    cin>>n;

    t=n;
    z=n;
    
    while(t!=0)
    {
        t=t/10;
        count++;
    }
int a[count];

//Failed logic
// j=n;
//      for(i=count-1;i>0;i--)
//      {
//       x=j;  
//       j=j/pow(10,i);
//       rem=x % int(pow(10,i));
//       a[(count-1)-i]=j;
//       j=rem;

//      }
//      a[count-1]=rem;

 
//     cout<<count;

    x=n;
    for(i=count-1;i>=0;i--)
    {
        x=x/10;
        n=n%10;
        a[i]=n;
        n=x;
    }
    // Test
    // for(i=0;i<count;i++)
    // {
    //     cout<<a[i]<<endl;
    // }

    for(i=count-1;i>=0;i--)
    {
       m=a[i];
       for(y=count-1;y>0;y--)
       {
        a[i]=m*a[i];
       }
    }
    
for(i=0;i<count;i++)
{
    sum=sum+a[i];
}


if(sum==z)
{
    cout<<"The given number "<<z<<" is an armstrong number."<<endl;
}else{
    cout<<"The given number "<<z<<" is not an armstrong number."<<endl;
}
cout<<"Thank you for using the program.";
    return 0;
}