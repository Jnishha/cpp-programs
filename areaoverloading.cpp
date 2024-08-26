//area function overloading
#include<iostream>
using namespace std;
float area(float);
float area(int, int);
int main()
{
	int r,b,h;
	cout<<"Enter radius of circle"<<endl;
	cin>>r;
	cout<<"Enter base and height of triangle"<<endl;
	cin>>b>>h;
	cout<<"Area of circle = "<<area(r)<<endl;
	cout<<"Area of triangle = "<<area(b,h)<<endl;
	return 0;
}
float area(float r)
{
	return 3.14*r*r;
}
float area(int b, int h)
{
	return 0.5*b*h;
	return 0.5*b*h;
}
