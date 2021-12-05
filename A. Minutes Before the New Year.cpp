#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int h,m;
        cin>>h>>m;

        m = h*60+m;
        cout<<1440-m<<endl;
    }

    return 0;
}