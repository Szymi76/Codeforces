#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int long long n,wynik=0;
    cin>>n;
 
    if(n%2!=0) {wynik = ((n/2)+1)*(-1) ;}
    else {wynik = n/2;}
    cout<<wynik;
 
    return 0;
}