#include<iostream>
using namespace std;
int main()
{
    char a[6];
    int i,c=0;
    cout<<"Enter area pin code"<<endl;
    gets(a);
    try
    {
        for(i=0;a[i]!='\0';i++)
        {
            c++;
        }
                if(c==6)
                    throw("Pin code is correct");

                if(c==5)
                    throw(c);

                if(c==4)
                    throw(c);

                if(c==3)
                    throw(c);

                if(c==2)
                    throw(c);

                if(c==1)
                    throw(c);

    }catch(int x)
    {
        cout<<"You Enter only "<<x<<" digit"<<endl;
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
    return 0;
}
