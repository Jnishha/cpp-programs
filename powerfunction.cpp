//power function m to n
#include<iostream>
using namespace std;
double power(double m, int n);
int main()
{
	double m,P;
	int n;
	cout<<"Enter m and n"<<endl;
	cin>>m>>n;
	P=power(m,n);
	cout<<m<<" to the power "<<n<<" is "<<P<<endl;
	return 0;
}
double power(double m,int n)
{
	int i,temp=1;
	for(i=0;i<n;i++)
	{
		temp=temp*m;
	}
	return temp;
}
