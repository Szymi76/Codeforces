#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int tab[n][n];

    for(int i=0; i<n; i++)
    {
        tab[0][i] = 1;
        tab[i][0] = 1;
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            tab[i][j] = tab[i][j-1]+tab[i-1][j];
        }
    }
    cout<<tab[n-1][n-1];

    return 0;
}