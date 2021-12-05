#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string slowo1,slowo2,ciag,slowo3;
    cin>>slowo1>>slowo2>>ciag;
    slowo3 = slowo1 + slowo2;

    sort(slowo3.begin(), slowo3.end());
    sort(ciag.begin(), ciag.end());

    if(slowo3==ciag) {cout<<"YES";}
    else {cout<<"NO";}

    return 0;
}