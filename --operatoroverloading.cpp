//overloading unary operator - -
#include <iostream>
using namespace std;
class Unary 
{
    private:
        int a;
    public:
        Unary()
        {
            a = 0;
        }
        Unary(int x)
        {
            a = x;
        }
        Unary operator--()
        {
            a=--a;
        }
        void display()
        {
            cout<<"Value of a is "<<a<<endl;
        }
};
int main()
{
    Unary a(4);
    cout<<"Before decrementing a = ";
    a.display();
    --a;
    cout<<"After decrementing a = ";
    a.display();
    return 0;
}
