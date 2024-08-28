//reads a number and check weather a number is prime or composite
#include<iostream>
using namespace std;
int main()
{
	int N, c=0;
	cout<<"Enter a number"<<endl;
	cin>>N;
	int temp=N,i;
	for(i=1;i<=N;i++)
	{
		if(N%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	cout<<"The number is prime."<<endl;
	else
	cout<<"The number is composite."<<endl;
	return 0;
}
