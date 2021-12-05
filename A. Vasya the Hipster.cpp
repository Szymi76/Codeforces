#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b;
    cin>>a>>b;

    if(a<b)
    {   cout<<a<<" ";
        b=b-a;
        a=0;
        cout<<b/2;
    }
    else
    {
        cout<<b<<" ";
        a=a-b;
        b=0;
        cout<<a/2;
    }
    
    return 0;
}