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
        int tabR[n];

        for(int j=0; j<n; j++)
        {
            cin>>tab[j];
        }
        sort(tab,tab+n);
        int s=0;
        for(int j=n-1; j>0; j--)
        {
            tabR[s] = tab[j]-tab[j-1];
            s++;
        }
        sort(tabR, tabR+s);
        cout<<tabR[0]<<endl;
    }

    return 0;
}