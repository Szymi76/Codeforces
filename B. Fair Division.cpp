#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a=0,b=0,sum=0;

        for(int j=0; j<n; j++)
        {   
            cin>>x;
            if(x==1) {a++;}
            else {b++;}
            sum+=x;
        }

        if(n%2==0)
        {
            if(sum%2==0) {cout<<"YES"<<endl;}
            else {cout<<"NO"<<endl;}
        }
        else
        {
            if(a==0&&b%2==0&&b!=1) {cout<<"YES"<<endl;}
            else if(b==0&&a%2==0&&a!=1) {cout<<"YES"<<endl;}
            else if(sum%2==0&&a>0&&b>0) {cout<<"YES"<<endl;}
            else {cout<<"NO"<<endl;}
        }
    }

    return 0;
}