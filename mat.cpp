#define R 3
#define C 3
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int M[R][C];
    public:
        void read()
        {
            int i,j;
            cout<<"Enter elements of matrix of 3*3 dimension"<<endl;
            for(i=0;i<R;i++)
            {
                for(j=0;j<C;j++)
                {
                    cin>>M[i][j];
                }
            }
        }
        void display()
        {
            int i,j;
            for(i=0;i<R;i++)
            {
                for(j=0;j<C;j++)
                {
                    cout<<M[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix operator +(Matrix m2)
        {
            Matrix t;
            int i,j;
            for(i=0;i<R;i++)
            {
                for(j=0;j<C;j++)
                {
                    t.M[i][j]=M[i][j]+m2.M[i][j];
                }
            }
            return t;
        }
};
int main()
{
    Matrix m1;
    Matrix m2;
    Matrix m3;
    m1.read();
    m2.read();
    m3=m1+m2;
    m3.display();
    return 0;
}
