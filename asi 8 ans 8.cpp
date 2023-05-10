#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,c=0,l,a=0;
    char str[100];
    cout<<"Enter your email address"<<endl;
    gets(str);
    l=strlen(str);

    try
    {
         for(i=0;i<l;i++)
            {
                if(str[i]=='@')
                    {
                        c=1;
                    }
                    if(str[i]=='621936')
                    {
                        a=1;
                    }
            }
        if(c==0)
            throw("Your Email id does not contain @");
            if(a==0)
                throw("Your gmail has not gmail.com");


    }catch(const char *s)
    {
        cout<<s<<endl;
    }


}
