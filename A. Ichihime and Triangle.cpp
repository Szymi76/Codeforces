#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c,d;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c>>d;   

        if(a+b>c) {cout<<a<<" "<<b<<" "<<c<<endl;}
        else if(b+b>c) {cout<<b<<" "<<b<<" "<<c<<endl;}
        else if(b+c>c) {cout<<b<<" "<<c<<" "<<c<<endl;}
        else if(a+b>d) {cout<<a<<" "<<b<<" "<<d<<endl;}
        else if(b+c>d) {cout<<b<<" "<<c<<" "<<d<<endl;}
        else {cout<<b<<" "<<b<<" "<<d<<endl;}
    }
    
    return 0;
}


