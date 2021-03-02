#include <iostream>
#include <algorithm>
using namespace std;
#define SL '\n'
#define IN cin
#define OU cout

int main()
{
    int t; IN >> t;
    while ( t-- )
    {
        int n; IN >> n;
        int ls[n];
        for(int i = 0; i < n; ++i) IN >> ls[i];
        sort(ls, ls+n);
        int medium = ls[n-1] - ls[0];
        OU << medium*2 << SL;
    }
}
