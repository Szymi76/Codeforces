#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n,a,b,c,d;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int max=0;
        cin>>a>>b>>c>>n;
        if(a>=b&&a>=c) {max = a;}
        else if(b>=a&&b>=c) {max = b;}
        else {max = c;}

        n-=(max-a)+(max-b)+(max-c);

        if(n>=0) 
        {
            if(n%3==0) {cout<<"YES";}
            else {cout<<"NO";}
        }
        else {cout<<"NO";}
        cout<<endl;
    }

    return 0;
}