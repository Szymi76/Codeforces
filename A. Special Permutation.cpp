#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int tab[n];

        for(int j=1; j<=n; j++)
        {
            tab[j] = j;
        }

        for(int j=1; j<n; j++)
        {
            swap(tab[j],tab[j+1]);
        }

        for(int j=1; j<=n; j++)
        {
            cout<<tab[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}