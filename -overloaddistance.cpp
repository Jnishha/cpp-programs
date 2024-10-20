//program in C++ that finds difference of two distances (feet, inch) by overloading binary operator -  using friend function
#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        int inch;
    public:
        Distance()
        {
            feet=inch=0;
        }
        Distance(int f,int i)
        {
            feet=f;
            inch=i;
        }
        friend Distance operator-(Distance d1,Distance d2);
        void display()
        {
            cout<<feet<<" ft "<<inch<<" inches"<<endl;
        }
}; 
Distance operator-(Distance d1,Distance d2)
        {
            Distance temp;
            temp.feet = d1.feet - d2.feet;
            temp.inch = d1.inch - d2.inch;
            if(temp.inch>12)
            {
                temp.feet = temp.feet+temp.inch / 12;
                temp.inch = temp.inch % 12;
            }
            return temp;
        }
int main()
{
    Distance d1(10,10);
    Distance d2(3,1);
    Distance d3;
    d3=d1-d2;
    d3.display();
    return 0;
}
