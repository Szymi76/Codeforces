#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,grupy=0;
    cin>>n;
    int tab[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
        if(tab[i-1]!=tab[i]) {grupy++;}  
    }
    cout<<grupy;
 
    return 0;
}