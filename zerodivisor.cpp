#include <iostream>
using namespace std;

int main()
{
    int num[] = {1, 2, 3, 4, 5};
    int den[] = {0, 1, 2, 3, 4};
    int i, a, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            try
            {
                if (den[i] == 0)
                throw(den[i]);
                a = num[j] / den[i];
                cout << a << endl;
            }
            catch (int e)
            {
                cout << "the denominator is 0" << endl;
            }
        }
    }
    return 0;
}