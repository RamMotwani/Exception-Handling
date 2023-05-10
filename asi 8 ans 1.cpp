#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two no.s"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
            throw("you entered zero in denominator");

            if(b==1)
                throw(b);

        c=a/b;

    }catch( const char *s)
    {
        cout<<s<<endl;
    }
    catch(int x)
    {
        cout<<"you entered "<<b<<" seriously?"<<endl;
    }
    cout<<"result = "<<c;
    return 0;

}
