//sum of digits of num using recursive function
#include<iostream>
using namespace std;
int digitsum(int n);
int main()
{
	int n,S;
	cout<<"Enter any digit"<<endl;
	cin>>n;
	S=digitsum(n);
	cout<<"The sum of digits of "<<n<<" is "<<S<<endl;
	return 0;
}
int digitsum(int n)
{
	if(n<10)
	return n;
	else
	return (n%10)+digitsum(n/10);
}
