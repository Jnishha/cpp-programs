//use of heirarchical inheritance
#include<iostream>
using namespace std;
class A
{
    public:
        int a;
        void read()
        {
            cout<<"Enter the value of a? "<<endl;
            cin>>a;
        }
        void show()
        {
            cout<<"a = "<<endl;
        }
};
class B:public A
{
    private:
        int b;
    public:
        void read()
        {
            A::read();
            cout<<"Enter the value of b? "<<endl;
            cin>>b;
        }
        void show()
        {
            A::show();
            cout<<"b = "<<b<<endl;
        }
};
class C:public A
{
    private:
        int c;
    public:
      void read()
        {
            A::read();
            cout<<"Enter the value of c? "<<endl;
            cin>>c;
        }
        void show()
        {
            A::show();
            cout<<"c = "<<c<<endl;
        }  
};
int main()
{
    A x;
    B y;
    C z;
    x.read();
    x.show();
    y.read();
    y.show();
    z.read();
    z.show();
}