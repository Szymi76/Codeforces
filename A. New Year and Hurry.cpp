#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k,p=0;
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        int pom = pom + i*5;
        if(pom+k<=240) {p++;}
        else {break;}
    }
    cout<<p;

    return 0;
}