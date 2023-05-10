#include<iostream>
using namespace std;
class operatr
{
public:
   friend int operator/(int x,int y)
    {
        return x/y;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter 2 no.s"<<endl;
    cin>>a>>b;
    try
    {
        if(operator!=/)
        c=a/b;
    }
}
