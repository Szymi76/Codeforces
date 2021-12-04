#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,num=0;
    cin>>n;
    int pom = n;

    for(int i=1; i<=n; i++)
    {
        n = pom;
        n-=i;
        if(n%i==0) {num++;}
    }
    cout<<num;

    return 0;
}