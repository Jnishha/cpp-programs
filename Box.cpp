//Box class with fields width,height and depth and calculate volume and area
#include<iostream>
using namespace std;
class Box
{
    private:
        int width;
        int height;
        int depth;
    public:
        Box()
        {
            width=height=depth=0;
        }
        Box(int w)
        {
            width=height=depth=w;
        }
        Box(int  w,int h,int d)
        {
            width=w;
            height=h;
            depth=d;
        }
        int getArea()
        {
            return 2*(width*height+height*depth+depth*width);
        }
        int getVolume()
        {
            return width*height*depth;
        }
        Box display()
        {
        	cout<<"Area = "<<getArea()<<endl;
            cout<<"Volume = "<<getVolume()<<endl;
		}
};
int main()
{
    Box b1(5,4,3);
    b1.display();
    return 0;
}
