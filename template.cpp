//swapping 2 datas using templatr functions
#include<iostream>
using namespace std;
template<class T>
void swapp(T &x, T &y)
{
	T t;
	t=x;
	x=y;
	y=t;
}
int main()
{
	int a,b;
	a=56;
	b=89;
	swapp(a,b);
	cout<<"In integers,"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	float x,y;
	x=4.3;
	y=7.4;
	swapp(x,y);
	cout<<"In decimals,"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	char c='P', d='Q';
	swapp(c,d);
	cout<<"In characters,"<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	return 0;
}
