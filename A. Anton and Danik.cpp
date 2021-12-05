#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,d=0,a=0;
    char znak;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>znak;
        if(znak=='D'){d++;}
        else if(znak=='A'){a++;}
    }
    if(a>d) {cout<<"Anton";}
    else if(d>a) {cout<<"Danik";}
    else {cout<<"Friendship";}
    
    return 0;
}