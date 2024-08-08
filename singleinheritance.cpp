//use of single inheritance
#include<iostream>
using namespace std;
class A
{
	private:
		char name[25];
		int age;
	public:
		void read()
		{
			cout<<"Enter your name and age "<<endl;
			cin>>name>>age;
		}
		void display()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Age = "<<age<<endl;
		}
};
class B:public A
{
	private:
		char address[25];
	public:
		void read()
		{
			A::read();
			cout<<"Enter your address "<<endl;
			cin>>address;
		}
		void display()
		{
			A::display();
			cout<<"Address = "<<address<<endl;
		}
};
int main()
{
	A a;
	B b;
	a.read();
	a.display();
	cout<<endl;
	b.read();
	b.display();
	return 0;
}
