//handle divide by zero exception
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        throw(b);
         c=a/b;
        cout<<a<<"/"<<b<<" = "<<c<<endl;
    }
    catch(int exp)
    {
        cout<<"A serious problem called / by zero has occurred"<<endl;
    }
    
}