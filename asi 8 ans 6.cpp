#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,l;
    char str[100];
    cout<<"Enter your Username  (That has more than 6 characters and does not contains special symbol or digits)"<<endl;
    fgets(str,100,stdin);
    try
    {
        l=strlen(str);
        for(i=0;i<=l;i++)
            {
                if(l<8)
                {
                    throw("Enter more than 6 characters");
                }
                if(str[i]>='0' && str[i]<='9')
                    {
                        for(j=i+1;j<=l;j++)
                        {
                            if(str[j]>='!' && str[j]<='.' || str[j]>=':' && str[j]<='@')
                            {
                                throw("Your Username contain both digit or symbol");
                            }

                        }
                        throw("Your Usename contain digit");
                    }



                     if(str[i]>='!' && str[i]<='.' || str[i]>=':' && str[i]<='@')
                    {
                        for(j=i+1;j<=l;j++)
                        {
                            if(str[j]>='0' && str[j]<='9')
                            {
                                throw("Your Username contain both symbol or digit");
                            }

                        }
                        throw("Your Usename contain symbol");
                    }



            }
            cout<<"Your Username is Correct"<<endl;


    }catch(const char *s)
    {
       cout<<s<<endl;
    }
    return 0;
}
