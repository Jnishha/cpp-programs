#include<iostream>
#include<math.h>
#define N 12
using namespace std;
template<class T>
void sorte(T arr[])
{
    T temp;
    int i, j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
template<class T>
void print(T arr[])
{
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr1[]={26,17,5,3,34,1,8,7,99,18,13,16};
    double arr2[]={17.26,13.16,8.9,1.3,3.4,2.0,5.7,6.6,8.1,77.28,47.25,55.14};
    sorte(arr1);
    print(arr1);
    cout<<endl;
    sorte(arr2);
    print(arr2);
    cout<<endl;
    return 0;
}
