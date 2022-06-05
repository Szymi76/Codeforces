#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,k,result;
    cin>>n>>k;

    if(n%2 == 0) {
        if(k < n/2+1) { result = 2*k-1  ;}
        else { result = k - (n - k) ;}
    }
    else {
        if(k <= n/2+1) { result = 2*k-1 ;}
        else { result = k - (n + 1 - k) ;}
    }

    cout<<result;

    return 0;
}


