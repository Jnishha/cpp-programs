#include<iostream>
using namespace std;
class Data
{
public:
double dat1;
double dat2;
Data()
{
dat1=dat2=0;
}
Data(double x, double y)
{
dat1=x;
dat2=y;
}
virtual double area()
{
return 0;
}
};
class Rectangle:public Data
{
public:
Rectangle():Data()
{}
Rectangle(double l, double b):Data(l,b)
{}
double area()
{
return dat1*dat2;
}
};
class Triangle:public Data
{
public:
Triangle():Data()
{}
Triangle(double b, double h):Data(b,h)
{}
double area()
{
return 0.5*dat1*dat2;
}
};
class Square:public Data
{
public:
Square():Data()
{}
Square(double l):Data(l,l)
{}
double area()
{
return dat1*dat2;
}
};
int main()
{
Rectangle r(8,4);
Data *d;
d=&r;
cout<<"Area of rectangle is "<<d->area()<<endl;
Triangle t(3,1);
d=&t;
cout<<"Area of Triangle is "<<d->area()<<endl;
Square s(9);
d=&s;
cout<<"Area of square is "<<d->area()<<endl;
}
