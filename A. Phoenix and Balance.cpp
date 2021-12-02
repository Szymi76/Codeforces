#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int diff=0;

        for(int j=1; j<=n/2; j++)
        {
            diff+=pow(2,j);
        }
        cout<<diff<<endl;        
    }
    return 0;
}