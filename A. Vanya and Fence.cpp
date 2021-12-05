#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,h,w=0;
    cin>>n>>h;
    int tab[n];    
 
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
        if(tab[i]>h) {w++;}
        w++;
    }
    cout<<w;
 
    return 0;
}