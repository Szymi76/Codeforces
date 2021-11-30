#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {   
        cin>>n;
        char tab[n];
        int sus=0;
        
        for(int j=0; j<n; j++)
        {
            cin>>tab[j];
        }

        for(int j=0; j<n; j++)
        {
            if(tab[j]==tab[j+1]) {tab[j]=0;}
        }

        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(k!=j)
                {
                    if(tab[j]==tab[k]&&tab[j]!=0) {sus++;} 
                }
            }
        }
        if(sus>0) {cout<<"NO"<<endl;}
        else {cout<<"YES"<<endl;}
    }
        
    return 0;
}