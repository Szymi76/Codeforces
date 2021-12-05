#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;

        if(a>b) 
        {
            if(a>2*b) {cout<<a*a<<endl;}
            else {cout<<(2*b)*(2*b)<<endl;}
        }
        else
        {
            if(b>2*a) {cout<<b*b<<endl;}
            else {cout<<(2*a)*(2*a)<<endl;}
        }
    }
        
    return 0;
    
}