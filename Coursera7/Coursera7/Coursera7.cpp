#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int i{ 0 }, N{ 0 };
    for (char c : S)
    {
        if (c == 'f')
        {
            if (N == 1)
            {
                cout << i;
            }
            N++;
        }
        i++;
    }

    if (N == 1) 
    {
        cout << -1;
    }

    if (N == 0)
    {
        cout << -2;
    }
}