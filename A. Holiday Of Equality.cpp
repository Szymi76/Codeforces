#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,burles=0;
    cin>>n;
    int tab[n];

    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    sort(tab,tab+n);
    for(int i=0; i<n-1; i++)
    {
        while(tab[i]!=tab[n-1]) {tab[i]++; burles++;}
    }
    cout<<burles;

    return 0;
}