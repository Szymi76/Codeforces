#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int c1=0,c2=0;

        if(n%3==0)
        {
            c1 = n/3;
            c2 = n/3; 
        }
        else
        {
            c1 = n/3+1;
            c2 = n/3;
        }
        if(c1+c2*2==n) {cout<<c1<<" "<<c2<<endl;}
        else {cout<<c2<<" "<<c1<<endl;}
    }

    return 0;
    
}