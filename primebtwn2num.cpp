//prime number from n1 to n2
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,j;
	cout<<"Enter two numbers"<<endl;
	cin>>n1>>n2;
	for(i=n1;i<=n2;i++)
	{
		int c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		cout<<i<<" ";
	}
	return 0;
}
