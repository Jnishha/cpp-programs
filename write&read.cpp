//program to write an object to file and reads objects from file
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char ch;
    fstream file;
    char str[]={"Hii!!!! Text is written."};
    int len;
    //open file in write mode
    file.open("C:/text.txt",ios::in|ios::out|ios::trunc);
    if(file.fail())
    {
        cout<<"Unable to open file."<<endl;
        return 1;
    }
    //write object to file
    len = strlen(str);
    cout<<"File is opened."<<endl;
    for (int i=0;i<len;i++)
    {
        file.put(str[i]);
    }
    cout<<"Text  is written to file."<<endl;
    file.seekg(0);
    //read object from file
    cout<<"Reading from file: "<<endl;
    getch();
    while (file.get(ch))
    {
        cout<<ch;
    }
}