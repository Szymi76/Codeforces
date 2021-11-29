#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n,k;
        cin>>n>>k;
        int tab_a[n];
        int tab_b[n];

        for(int j=0; j<n; j++) 
        {
            cin>>tab_a[j];
        }
        for(int j=0; j<n; j++)
        {
            cin>>tab_b[j];
        }

        sort(tab_a, tab_a+n);
        sort(tab_b, tab_b+n);

        int m=n-1,sum=0,s=0;
        for(int j=0; j<k; j++)
        {   
            if(tab_a[s]<tab_b[m]) {swap(tab_a[s],tab_b[m]);}
            m--;
            s++;
        }
        for(int j=0; j<n; j++)
        {
            sum+=tab_a[j];
        }
        cout<<sum<<endl;
    }

    return 0;
}