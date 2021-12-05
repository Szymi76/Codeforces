#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int x,y,n;
        cin>>x>>y>>n;

        int pom = n/x;
        int result = x * pom +y;

        if(result>n) {result-=x;}
        cout<<result<<endl;
    }
    
    return 0;
    
}