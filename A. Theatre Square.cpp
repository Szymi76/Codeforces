#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {

    long double n,m,a;
    cin>>n>>m>>a;

    cout<<ll(ceil(n/a) * ceil(m/a));

    return 0;
}