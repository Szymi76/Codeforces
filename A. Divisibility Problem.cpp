#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    for(int i=0; i<t; i++)
    {
        int a,b,moves=0;
        cin>>a>>b;
        if(a%b==0) 
        {
            cout<<0<<endl;
        }
        else 
        {
            int pom = a%b;
            cout<<b-pom<<endl;
        }  
    }
 
    return 0;
}