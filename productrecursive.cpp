//product of 2 numbers using recursive function
#include<iostream>
using namespace std;
int product(int ,int);
int main()
{
	int a,b,P;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	P=product(a,b);
	cout<<"Product of "<<a<<" and "<<b<<" = "<<P<<endl;
	return 0;
}
int product(int a, int b)
{
	if(b==1)
	return a;
	else
	return a+product(a,b-1);
}
