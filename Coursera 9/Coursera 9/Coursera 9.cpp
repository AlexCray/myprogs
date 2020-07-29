#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v;
    while (N >= 2)
    {
        v.push_back(N % 2);
        N /= 2;
    }
    v.push_back(N);
   
    for (int i=v.size(); i>0; i--)
    {
        cout << v[i-1];
    } 
}