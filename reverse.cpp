//C++ program to read a number and find its reverse
#include<iostream>
using namespace std;
int main()
{
    int N;
    int rev=0;
    cout<<"Enter a number which reverse is to be found"<<endl;
    cin>>N;
    int temp=N;
    rev=0;
    int rem;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    cout<<"The reversed number is "<<rev<<endl;
    return 0;
}
