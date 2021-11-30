#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n,swaps=0,even=0,odd=0;
        cin>>n;
        int tab[n];

        for(int j=0; j<n; j++)
        {
            cin>>tab[j];
            if(j%2!=tab[j]%2)
            {
                if(j%2==0) {even++;}
                else {odd++;}
            }
        }

        if(even!=odd) {cout<<"-1"<<endl;}
        else {cout<<even<<endl;}
    }
        
    return 0;
}