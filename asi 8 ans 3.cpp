#include<iostream>
using namespace std;
int main()
{
    int i,c=0;
    char str[100];
    cout<<"Enter your email address"<<endl;
    gets(str);

    try
    {
         for(i=0;str[i]!='\0';i++)
            {
                if(str[i]=='@')
                    {
                        c=1;
                    }
            }
        if(c==0)
            throw("Your Email id does not contain @");
            if(c==1)
                throw("Your Email id is correct");

    }catch(const char *s)
    {
        cout<<s<<endl;
    }

}
