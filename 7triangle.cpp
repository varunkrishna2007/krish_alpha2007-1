#include <iostream>
using namespace std;

int main()
{
    int n=4,i,j;
    cout<<"This program prints a triangle."<<endl;

    int number=1;

    cout<<"The square is: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<number<<" ";    
            number++;
        }
        cout<<endl;
    }

    cout<<"End of the program.";
    return 0;
}