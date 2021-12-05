#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,rooms=0;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        int p,q;
        cin>>p>>q;
        if(p+2<=q) {rooms++;}
    }
    cout<<rooms;
 
    return 0;
}