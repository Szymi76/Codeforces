#include <bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;
    
    int ope[5] = {a*b*c, a+b+c, (a+b)*c, a*(b+c)}; 
    sort(ope, ope+5);

    cout<<ope[4];

    return 0;
}