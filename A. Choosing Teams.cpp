#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,team=0;
    cin>>n>>k;
    int tab[n];

    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    
    sort(tab,tab+n);
    int s = n/3,x=-1;

    for(int i=0; i<s; i++)
    {
        x+=3;
        if(tab[x-2]+k<=5&&tab[x-1]+k<=5&&tab[x]+k<=5) {team++;}
    }
    cout<<team;

    return 0;
    
}