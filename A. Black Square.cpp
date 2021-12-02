#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3,a4,cal=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1') {cal+=a1;}
        else if(s[i]=='2') {cal+=a2;}
        else if(s[i]=='3') {cal+=a3;}
        else if(s[i]=='4') {cal+=a4;}
    }
    cout<<cal;
    
    return 0;
}