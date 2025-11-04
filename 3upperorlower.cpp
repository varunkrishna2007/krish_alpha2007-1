#include <iostream>
using namespace std;

int main()
{
    char alp;
    cout<<"To check whether the alphabet written is uppercase or lowercase."<<endl;
    cout<<"Enter an alphabet: ";
    cin>>alp;

    if(alp>='a' && alp<='z')
    {
        cout<<"The character"<<alp<<"is a lowercase character.";
    }else if(alp>='A' && alp<='Z'){
        cout<<"The character"<<alp<<"is a uppercase character.";
    }else{
        cout<<"The given input is not an alphabet.";
    }

    return 0;

}