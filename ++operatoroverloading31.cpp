//overloading unary operator ++
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
        Unary operator++()
        {
            a=++a;
        }
        void display()
        {
            cout<<"Value of a is "<<a<<endl;
        }
};
int main()
{
    Unary a(8);
    cout<<"Before incrementing a = ";
    a.display();
    ++a;
    cout<<"After incrementing a = ";
    a.display();
}
