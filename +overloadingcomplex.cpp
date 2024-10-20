//add two complex numbers by overloading binary operator +
#include<iostream>>
using namespace std;
class Binary
{
    private:
        int real;
        int img;
    public:
        Binary()
        {
            real=img=0;
        }
        Binary(int r,int i)
        {
            real=r;
            img=i;
        }
        Binary operator+(Binary b)
        {
            Binary temp;
            temp.real = real + b.real;
            temp.img = img + b.img;
            return temp;
        }
        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
}; 
int main()
{
    Binary b1(1,5);
    Binary b2(2,3);
    Binary b3;
    b3=b1+b2;
    b3.display();
    return 0;
}
