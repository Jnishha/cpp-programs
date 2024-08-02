#include<iostream>
using namespace std;
class Second;
class First
{
    private:
    int marks;
    public:
    First(int m)
    {
        marks=m;
    }
    friend void larger(First f, Second s);
};
class  Second
{
private:
    int marks;
public:
     Second(int m)
     {
        marks=m;
     }
     friend void larger(First f, Second s);
};
void larger(First f, Second s)
{
    if(f.marks>s.marks)
    {
        cout<<"A has highest marks of "<<f.marks<<endl;
    }
    else
    {
        cout<<"B has highest marks of "<<s.marks<<endl;
    }
}
int main()
{
    First f(455);
    Second s(487);
    larger (f,s);
    return 0;
}
