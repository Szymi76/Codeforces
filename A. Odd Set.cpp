#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int odd = 0,even = 0;
        
        for(int j=0; j<2*n; j++)
        {
            int a;
            cin>>a;
            if(a%2==0) {even++;}
            else {odd++;}
        }
        if(even==odd) {cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}
    }
    
    return 0;
}