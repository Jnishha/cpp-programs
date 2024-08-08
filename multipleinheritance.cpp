//use of multiple inheritance
#include<iostream>
using namespace std;
class A
{
	private:
		int eid;
		float salary;
	public:
		void read()
		{
			cout<<"Enter the value of eid and salary"<<endl;
			cin>>eid>>salary;
		}
		void display()
		{
			cout<<"Eid = "<<eid<<endl;
			cout<<"Salary = "<<salary<<endl;
		}
};
class B
{
	private:
		char post[15];
	public:
		void read()
		{
			cout<<"Enter your post"<<endl;
			cin>>post;
		}
		void display()
		{
			cout<<"Post = "<<post<<endl;
		}
};
class C:public A, public B
{
	private:
		char address[20];
	public:
		void read()
		{
			A::read();
			B::read();
			cout<<"Enter your address"<<endl;
			cin>>address;
		}
		void display()
		{
			A::display();
			B::display();
			cout<<"Address = "<<address<<endl;
		}
};
int main()
{
	A a;
	B b;
	C c;
	a.read();
	a.display();
	cout<<endl;
	b.read();
	b.display();
	cout<<endl;
	c.read();
	c.display();
	return 0;
}
