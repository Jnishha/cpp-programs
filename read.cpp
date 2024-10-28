//program to read line of text from file
#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("C:/text.txt");
    cout<<"Reading from file"<<endl;
    while(!fin.eof())
    {
        fin.get(ch);
        cout<<ch;
    }
    fin.close();
    
}