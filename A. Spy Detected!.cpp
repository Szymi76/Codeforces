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

        for(int j=0; j<n; j++)
        {
            cin>>tab[j];
        }
        for(int j=0; j<n; j++)
        {
            if(j==n-2)
            {
                if(tab[j]!=tab[j+1]) 
                {
                    if(tab[j]!=tab[j-1]) {cout<<j+1<<endl; break;}
                }
            }
            else if(j==n-1)
            {
               if(tab[j]!=tab[j-1])
                {
                    if(tab[j]!=tab[j-2]) {cout<<j+1<<endl; break;}
                }
            }
            else 
            {
                if(tab[j]!=tab[j+1])
                {
                    if(tab[j]!=tab[j+2]) {cout<<j+1<<endl; break;}
                }
            }
        }
    }

    return 0;
    
}