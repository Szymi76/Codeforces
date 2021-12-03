#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t,w,h,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>w>>h>>n;
        ll sum=0,sum1=w*h;;

        while(w%2==0||h%2==0)
        {
            if(w%2==0) {w = w/2;} 
            else if(h%2==0) {h = h/2;};
        }
        for(int j=0; j<n; j++)
        {   
            sum+=w*h;
        }
        if(sum<=sum1) {cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }

    return 0;
}