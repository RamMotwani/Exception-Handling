#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j=0,l,c=0,k=0,t=0;;
    char str[100];
    cout<<"Enter your Password That has more than 6 characters and contains capital letter, special symbol or digits)"<<endl;
    fgets(str,100,stdin);
        l=strlen(str);
        for(i=0;i<l;i++)
        {
            if(l<7)
            {
                throw("Enter more than 6 character");
            }
            if(str[i]>='A' && str[i]<='Z')
            {
                c=1;
            }
            if(str[i]>='0' && str[i]<='9')
            {
                j=1;
            }
            if(str[i]>='!' && str[i]<='.' || str[i]>=':' && str[i]<='@')
            {
                k=1;
            }
        }
        try
        {
            if(c==0)
                throw("Enter atleast one character");

            if(j==0)
                throw("Enter atleast one digit");

            if(k==0)
                throw("Enter atleast one symbol");

                cout<<"your password is accepted"<<endl;
        }

    catch(const char *s)
    {
       cout<<s<<endl;
    }
    return 0;
}
