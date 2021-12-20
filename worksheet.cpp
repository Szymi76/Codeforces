#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int pom;

    while(b!=0)
    {
        pom = b;
        b = a%b;
        a = pom;
    }

    cout<<a;

    return 0;
}