#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int s[4];
        cin>>s[0]>>s[1]>>s[2]>>s[3];
        int s1 = s[0], s2 = s[1], s3 = s[2], s4 = s[3];
        sort(s,s+4);
        
        if((s1<s[2]&&s2<s[2])||(s3<s[2]&&s4<s[2])) cout<<"NO"<<endl;
        else {cout<<"YES"<<endl;}
    }

    return 0;
}