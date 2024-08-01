#include<iostream>
using namespace std;
class Base
{
public:
int a;
void show()
{
cout<<"a="<<a<<endl;
}
};
class Derived:public Base
{
public:
int d;
void show()
{
cout<<"a="<<a<<endl;
}
void display()
{
cout<<"a="<<a<<endl;
cout<<"d="<<d<<endl;
}
};
int main()
{
Base bas;
Base *bptr;
Derived der;
bptr=&bas;
bptr->a=100;
bptr->show();
cout<<"bptr now points to derived class object"<<endl;
bptr=&der;
bptr->a=200;
bptr->show();
return 0;
}
