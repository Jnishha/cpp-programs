//use of hybrid inheritance
#include<iostream>
using namespace std;
class Person
{
    private:
        char name[20];
        char address[20];
    public:
        void read()
        {
            cout<<"Enter name and address"<<endl;
            cin>>name>>address;
        }
        void display()
        {
            cout<<"Name = "<<name<<endl;
            cout<<"Address = "<<address<<endl;
        }
};
class Student:public Person
{
    public:
        int roll;
        void read()
        {
            Person::read();
            cout<<"Enter roll"<<endl;
            cin>>roll;
        }
        void display()
        {
            Person::display();
            cout<<"Roll = "<<roll<<endl;
        }
};
class Employee:public Person
{
    public:
        int eid;
        void read()
        {
            Person::read();
            cout<<"Enter eid"<<endl;
            cin>>eid;
        }
        void display()
        {
            Person::display();
            cout<<"Eid = "<<eid<<endl;
        }
};
class Post:public Student
{
    public:
        char post[10];
        void read()
        {
            Person::read();
            cout<<"Enter post"<<endl;
            cin>>post;
        }
        void display()
        {
            Person::display();
            cout<<"Post = "<<post<<endl;
        }
};
int main()
{
    Person p;
    Student s;
    Employee e;
    Post po;
    p.read();
    p.display();
    s.read();
    s.display();
    e.read();
    e.display();
    po.read();
    po.display();
}