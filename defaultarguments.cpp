//SI using default arguments
#include<iostream>
using namespace std;
float interest(float p, float t, float r=0.12);
int main()
{
	float p,t,r;
	cout<<"Enter value of P and t whose r is 12%"<<endl;
	cin>>p>>t;
	cout<<"Simple interest = "<<interest(p,t)<<endl;
	return 0;
}
float interest(float p, float t, float r)
{
	return p*t*r;
}
