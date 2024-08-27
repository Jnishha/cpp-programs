//constructor overloading
#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;
	public:
		Complex()
		{
			real=img=0;
		}
		Complex(int r, int i)
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	Complex c1;
	Complex c2(3,2);
	c1.display();
	c2.display();
	return 0;
}
