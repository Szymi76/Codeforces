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
        int pom = 0;
        for(int j=0; j<n; j++)
        {
            cin>>tab[j];
        }
        sort(tab, tab+n);
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(k>j)
                {
                    if(abs(tab[j]-tab[k])<=1) {pom++; break;}
                }     
            }  
        }
        if(pom==n-1) {cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
    
    return 0;
}