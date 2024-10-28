//program to write line of text to a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("C:/text.txt");
    if(fout.fail())
    {
        cout << "File is not opened." << endl;
        return 1;
    }
    cout << "File is opened." << endl;
    fout<<"Hello , I am a line of text."<<endl;
    fout.close();
    return 0;
}
