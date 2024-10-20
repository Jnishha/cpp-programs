//add two times (hr, min, sec) objects by overloading + operator
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        Time()
        {
            hr=min=sec=0;
        }
        Time(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }
        Time operator+(Time t)
        {
            Time temp;
            temp.hr = hr + t.hr;
            temp.min = min + t.min;
            temp.sec = sec + t.sec;
            if(temp.sec>=60)
            {
                temp.min=temp.min+temp.sec/60;
                temp.sec=temp.sec%60;
            }
            if(temp.min>=60)
            {
                temp.hr=temp.hr+temp.min/60;
                temp.min=temp.min%60;
            }
        
            return temp;
        }
        void display()
        {
            cout<<hr<<" : "<<min<<" : "<<sec<<endl;

        }
}; 
int main()
{
    Time t1(1,20,10);
    Time t2(0,9,50);
    Time t3;
    t3=t1+t2;
    t3.display();
    return 0;
}
