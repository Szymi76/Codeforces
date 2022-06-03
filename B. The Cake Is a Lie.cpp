#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int s=0; s<t; s++) {

        int x,y,k;
        cin>>x>>y>>k;

        int result = (x-1) + (y-1) * x;

        if(result == k) {cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }

    return 0;
}


