//Program to find permutation
#include<iostream>
using namespace std;
class Permutation
{
	private:
		int n;
		int r;
		float P;
	public:
		void display()
		{
			cout<<"Permutation of P("<<n<<","<<r<<") is "<<P;
		}
		float calculate(int n, int r)
		{
			int i,f1=1,f2=1;
			for(i=1;i<=n;i++)
			{
				f1=f1*i;
			}
			for(i=1;i<=(n-r);i++)
			{
				f2=f2*i;
			}
			P=f1/f2;
			return P;
		}
};
int main()
{
	Permutation p;
	p.calculate(5,5);
	p.display();
	return 0;
}
