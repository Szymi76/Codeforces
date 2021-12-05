#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int mil = (k*l)/nl;
    int limes = c*d;
    int salt = p/np;

    int tab[3] = {mil,limes,salt};
    sort(tab,tab+3);
    cout<<tab[0]/n;

    return 0;
    
}