#include<iostream>
using namespace std;
int series(int);
int main()
{
int i,n,f;
cout<<"Enter no. of terms in the series: "<<endl;
cin>>n;
for ( i = 0; i < n; i++)
{
    f=series(i); 
    cout<<f<<" ";   
}
return 0;
}
int series(int i)
{
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else
    return (series(i-1)+series(i-2));
}