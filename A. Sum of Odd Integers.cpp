#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    int t;
    cin>>t;

    for(int s=0; s<t; s++) {

        ll n,k,sum = 0;
        cin>>n>>k;

        ll last = n - pow(k-1,2);
        ll add = pow(k-1,2) - pow(k-2,2);
        if(last > add && last%2 != 0) { cout<<"YES"<<endl ;}
        else { cout<<"NO"<<endl ;}

    }

    return 0;
}