#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {   
        cin>>n;
        int tab[2*n];

        for(int j=0; j<2*n; j++)
        {
            cin>>tab[j];
        }        

        for(int j=0; j<2*n; j++)
        {
            for(int k=0; k<2*n; k++)
            {
                if(j!=k)
                {
                    if(tab[k]==tab[j]) {tab[k]=0;}
                }
            }
        }

        for(int j=0; j<2*n; j++)
        {
            if(tab[j]!=0)
            {
                cout<<tab[j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
    
}